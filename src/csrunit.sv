import eei::*;
import corectrl::*;

module csrunit (
	input  logic clk,
	input  logic rst,
	input  logic valid,
	input  Addr  pc,
	input  Inst  inst_bits,
	input  InstCtrl ctrl,
	input  ExceptionInfo expt_info,
	input  logic [4:0]  rd_addr,
	input  logic [11:0] csr_addr,
	input  logic [4:0]  rs1_addr,
	input  UIntX rs1_data,
	input  logic can_intr,
	output UIntX rdata,
	output PrivMode mode,
	output logic raise_trap,
	output Addr  trap_vector,
	output logic trap_return,
	input  UInt64  minstret,
	aclint_if.slave aclint
);

	localparam UIntX MSTATUS_WMASK = UIntX'('h0000_0000_0020_19aa) ;
	localparam UIntX MTVEC_WMASK  = 'hffff_ffff_ffff_fffd;
	localparam UIntX MCOUNTEREN_WMASK  = UIntX'('h0000_0000_0000_0007);
	localparam UIntX MSCRATCH_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX MEPC_WMASK   = 'hffff_ffff_ffff_fffe;
	localparam UIntX MCAUSE_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX MTVAL_WMASK  = 'hffff_ffff_ffff_ffff;
	localparam UIntX MIE_WMASK  = UIntX'('h0000_0000_0000_0088);

	localparam UIntX SSTATUS_WMASK  = UIntX'('h0000_0000_0000_0122);
	localparam UIntX SCOUNTEREN_WMASK  = UIntX'('h0000_0000_0000_0007);
	localparam UIntX STVEC_WMASK  = 'hffff_ffff_ffff_fffd;
	localparam UIntX SSCRATCH_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX SEPC_WMASK   = 'hffff_ffff_ffff_fffe;
	localparam UIntX SCAUSE_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX STVAL_WMASK  = 'hffff_ffff_ffff_ffff;


	//read masks
	localparam UIntX SSTATUS_RMASK  = UIntX'('h8000_0003_018f_e762);


	//CSRR(W|S|C)かどうか
	logic is_wsc;
	assign is_wsc = ctrl.is_csr && ctrl.funct3[1:0] != 0;

	logic is_mret;
	assign is_mret = (inst_bits == 32'h10500073);

	logic is_wfi;
	assign is_wfi = (inst_bits == 32'h10500073);

	// will_not_write_csr: CSRRSI / CSRRCI で rs1=0 のとき → 読み取り専用動作
	logic will_not_write_csr;
	assign will_not_write_csr =
		((ctrl.funct3[1:0] == 2'b10) || (ctrl.funct3[1:0] == 2'b11))
		&& (rs1_addr == 5'd0);

	// expt_write_readonly_csr: 書き込み系で、書き込み禁止CSRにアクセスしたとき
	logic expt_write_readonly_csr;
	assign expt_write_readonly_csr =
		(is_wsc && !will_not_write_csr && (csr_addr[11:10] == 2'b11));

	logic expt_csr_priv_violation;
	assign expt_csr_priv_violation = is_wsc && (csr_addr[9:8] > mode);

	logic expt_zicntr_priv;
	logic zicntr_denied;
	assign zicntr_denied =
		(csr_addr == CYCLE)   ? !mcounteren[0] :
		(csr_addr == TIME)    ? !mcounteren[1] :
		(csr_addr == INSTRET) ? !mcounteren[2] :
										1'b0;

	assign expt_zicntr_priv =
		is_wsc &&
		(mode <= S) &&
		zicntr_denied;



	//CSR register create
	UIntX misa;
	assign misa = {
    2'd2,                                         // MISAの最上位2ビット (MISA[XLEN-1:XLEN-2])
    1'b0,                                         // 次の1ビット
    {(XLEN - 2 - 1 - 26){1'b0}},                  // 'repeat XLEN - 28' に相当する0ビットの繰り返し
                                                  // (XLEN - 28) = XLEN - (2 + 1 + 25) ではなく、
                                                  // XLEN - (2 + 1 + 26) = XLEN - 29 が正しいため、
                                                  // XLEN - 2 - 1 - 26 = XLEN - 29 で計算します。
    26'b00000101000001000100000101                // MISAの最下位26ビット
	};

	UIntX mhartid = 0;
	UIntX mstatus, mtvec, mie, mip, mscratch, mepc, mcause, mtval;
	UInt32 mcounteren;
	UInt64 mcycle;

	assign mip = {
		{(XLEN - 12){1'b0}},
		1'b0, // MEIP
		1'b0, // 0
		1'b0, // SEIP
		1'b0, // 0
		aclint.mtip, // MTIP
		1'b0, // 0
		1'b0, // STIP
		1'b0, // 0
		aclint.msip, //MSIP
		1'b0, // 0
		1'b0, // SSIP
		1'b0 // 0
	};


	PrivMode mstatus_mpp;
	assign mstatus_mpp = PrivMode'(mstatus[12:11]);

	//mstatus bits
	logic mstatus_mpie;
	assign mstatus_mpie = mstatus[7];

	logic mstatus_mie;
	assign mstatus_mie = mstatus[3];

	//Supevisor mode CSR
	UIntX  sstatus , stvec, sscratch, sepc, scause, stval;
	assign sstatus = mstatus & SSTATUS_RMASK;
	UInt32 scounteren;


	//Interrupt
	UIntX interrupt_pending;
	assign interrupt_pending = mip & mie;
	logic raise_interrupt;
	assign raise_interrupt =  valid && can_intr && (mode != M || mstatus_mie) && interrupt_pending != 0;

	UIntX interrupt_cause;
	assign interrupt_cause =
		interrupt_pending[3] ? MACHINE_SOFTWARE_INTERRUPT :
		interrupt_pending[7] ? MACHINE_TIMER_INTERRUPT :
							UIntX'(0);

	Addr interrupt_xtvec;
	assign interrupt_xtvec = (interrupt_mode == M) ? mtvec : stvec;

	Addr interrupt_vector;
	assign interrupt_vector = (interrupt_xtvec[0] == 0) ? {interrupt_xtvec[XLEN-1 : 2], 2'b0} : { (interrupt_xtvec[XLEN-1:2] + interrupt_cause[XLEN-1-2:0]),2'b0}; //vectored



	PrivMode interrupt_mode;
	assign interrupt_mode = M;

	//Exception
	logic raise_expt;
	assign raise_expt = valid && (expt_info.valid || expt_write_readonly_csr || expt_csr_priv_violation || expt_zicntr_priv);
	UIntX expt_cause ;
	always_comb begin
		if(expt_info.valid) begin
			expt_cause = expt_info.cause;
		end else if (expt_write_readonly_csr) begin
			expt_cause = ILLEGAL_INSTRUCTION;
		end else if (expt_csr_priv_violation) begin
			expt_cause = ILLEGAL_INSTRUCTION;
		end else if (expt_zicntr_priv) begin
			expt_cause = ILLEGAL_INSTRUCTION;
		end else begin
			expt_cause = '0;
		end
	end

	UIntX expt_value;
	always_comb begin
		if (expt_info.valid)begin
			expt_value = expt_info.value;
		end else if (expt_cause == ILLEGAL_INSTRUCTION) begin
			expt_value = { {(XLEN - $bits(Inst)){1'b0}}, inst_bits };
		end else begin
			expt_value = '0;
		end
	end

	Addr expt_xtvec;
	assign expt_xtvec = (expt_mode == M) ? mtvec : stvec;

	Addr expt_vector;
	assign expt_vector = {expt_xtvec[XLEN-1 : 2], 2'b0};

	PrivMode expt_mode;
	assign expt_mode = M;

	// Trap Return
	assign trap_return = valid && is_mret && !raise_expt && !raise_interrupt;
	PrivMode trap_return_mode;
	assign trap_return_mode = mstatus_mpp;

	//Trap
	assign raise_trap  = raise_expt || raise_interrupt || trap_return;

	UIntX  trap_cause ;
	assign trap_cause =
    raise_expt      ? expt_cause :
    raise_interrupt ? interrupt_cause :
                      UIntX'(0);

	assign trap_vector =
		raise_expt      ? expt_vector :
		raise_interrupt ? interrupt_vector :
		trap_return     ? mepc :
						UIntX'(0);

	PrivMode trap_mode_next;
	assign trap_mode_next =
		raise_expt      ? expt_mode :
		raise_interrupt ? interrupt_mode :
		trap_return     ? trap_return_mode :
						  U;   // enum名は環境に合わせて



	UIntX wdata;
	UIntX wmask;

	logic [XLEN-1:0] wsource; //always_comb の外で定義

	always_comb begin
		// read
		case (csr_addr)
			MISA    : rdata = misa;
			MIMPID  : rdata = MACHINE_IMPLEMENTATION_ID;
			MHARTID : rdata = mhartid;
			MSTATUS : rdata = mstatus;
			MTVEC   : rdata = mtvec;
			MIP   : rdata = mip;
			MIE   : rdata = mie;
			MCOUNTEREN   : rdata = {{(XLEN-32){1'b0}},mcounteren};
			MCYCLE  : rdata = mcycle;
			MINSTRET: rdata = minstret;
			MSCRATCH: rdata = mscratch;
			MEPC    : rdata = mepc;
			MCAUSE  : rdata = mcause;
			MTVAL   : rdata = mtval;
			SSTATUS   : rdata = sstatus;
			SCOUNTEREN : rdata = {{(XLEN - 32){1'b0}}, scounteren};
			STVEC   : rdata = stvec;
			SEPC    : rdata = sepc;
			SCAUSE  : rdata = scause;
			STVAL   : rdata = stval;
			CYCLE   : rdata = mcycle;
			TIME    : rdata = aclint.mtime;
			INSTRET : rdata = minstret;
			default       : rdata = 'x;
		endcase

		// write mask
		case (csr_addr)
			MSTATUS  : wmask = MSTATUS_WMASK;
			MTVEC    : wmask = MTVEC_WMASK;
			MIE      : wmask = MIE_WMASK;
			MCOUNTEREN : wmask = MCOUNTEREN_WMASK;
			MSCRATCH : wmask = MSCRATCH_WMASK;
			MEPC     : wmask = MEPC_WMASK;
			MCAUSE   : wmask = MCAUSE_WMASK;
			MTVAL    : wmask = MTVAL_WMASK;
			SSTATUS  : wmask = SSTATUS_WMASK;
			SCOUNTEREN : wmask = SCOUNTEREN_WMASK;
			STVEC : wmask = STVEC_WMASK;
			SSCRATCH : wmask = SEPC_WMASK;
			SCAUSE : wmask = SCAUSE_WMASK;
			STVAL : wmask = STVAL_WMASK;
			default       : wmask = '0;
		endcase

		// wsource
		// (funct3[2] == 1 : immediate → rs1_addr is used)
		if (ctrl.funct3[2]) begin
			wsource = {{(XLEN-5){1'b0}}, rs1_addr};
		end else begin
			wsource = rs1_data;
		end

		// wdata (CSRRS, CSRRC, etc.)
		case (ctrl.funct3[1:0])
			2'b01:  wdata = wsource;            // CSRRW / CSRRWI
			2'b10:  wdata = rdata | wsource;    // CSRRS / CSRRSI
			2'b11:  wdata = rdata & ~wsource;   // CSRRC / CSRRCI
			default: wdata = 'x;
		endcase

		// apply write mask
		wdata = (wdata & wmask) | (rdata & ~wmask);
	end

	Addr xepc;

	always_ff @(posedge clk or negedge rst) begin
		if (!rst) begin
			mode     <=  M;
			mstatus  <=  MSTATUS_UXL | MSTATUS_SXL;
			mtvec    <= '0;
			mie      <= '0;
			mcounteren <= '0;
			mscratch <= '0;
			mcycle   <= '0;
			mepc     <= '0;
			mcause   <= '0;
			mtval    <= '0;
			scounteren <= '0;
			stvec <= '0;
			sscratch <= '0;
			sepc <= '0;
			scause <= '0;
			stval <= '0;
		end else begin
			mcycle += 1;
			if (valid) begin
				if (raise_trap) begin
					if (raise_expt || raise_interrupt) begin
						if (raise_expt)begin
							xepc = pc; //exception
						end else if (raise_interrupt && is_wfi) begin
							xepc = pc + 4;
						end else begin
							xepc = pc;
						end
						if (trap_mode_next == M) begin
							mepc <= xepc;
							mcause <= trap_cause;
							if (raise_expt) begin
								mtval <= expt_value;
							end
							//save mstatus.mie to mstatus.mpie
							//and set mstatus.mie = 0
							mstatus[7] <= mstatus[3];
							mstatus[3] <= 0;
							//save current priviledge level to mstatus.mpp
							mstatus[12:11] <= mode;
						end else begin
							sepc <= xepc;
							scause <= trap_cause;
							if (raise_expt) begin
								stval <= expt_value;
							end
							//save sstatus.sie to sstatus.spie
							//and set sstatus.sie = 0
							mstatus[5] <= mstatus[1];
							mstatus[1] <= 0;
							//save current privilege mode (S or U) to sstatus.spp
							mstatus[8] <= mode[0];
						end
					end if (trap_return) begin
						//save mstatus.mie to mstatus.mipe
						// and set mstatus.mie = 0
						mstatus[3] <= mstatus[7];
						mstatus[7] <= 0;
						// set mstatus.mpp = U (least priviledge level)
						mstatus[12:11] <= U;
					end
					mode <= trap_mode_next;
				end else begin
					if (is_wsc) begin
						case (csr_addr)
							MSTATUS  : mstatus  <= validate_mstatus(mstatus, wdata);
							MTVEC    : mtvec    <= wdata;
							MIE      : mie      <= wdata;
							MCOUNTEREN : mcounteren <= wdata[31:0];
							MSCRATCH : mscratch <= wdata;
							MEPC     : mepc     <= wdata;
							MCAUSE   : mcause   <= wdata;
							MTVAL    : mtval    <= wdata;
							SSTATUS  : mstatus  <= validate_mstatus(mstatus, wdata | mstatus & ~SSTATUS_WMASK);
							SCOUNTEREN : scounteren <= wdata[31:0];
							STVEC : stvec <= wdata;
							SSCRATCH : sscratch <= wdata;
							SEPC : sepc <= wdata;
							SCAUSE : scause <= wdata;
							STVAL : stval <= wdata;
							default  : /* do nothing */ ;
						endcase
					end
				end
			end
		end
	end
	function automatic UIntX validate_mstatus(
		input UIntX mstatus,
		input UIntX wdata
	);
		UIntX result;
		result = wdata;

		// MPP: only M(11) or U(00) allowed
		if (wdata[12:11] == 2'b10)
		begin
			result[12:11] = mstatus[12:11];
		end

		return result;
	endfunction
endmodule : csrunit
