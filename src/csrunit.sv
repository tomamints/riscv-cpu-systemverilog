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
	output UIntX rdata,
	output logic raise_trap,
	output Addr  trap_vector,
	output logic trap_return,
	input  UInt64  minstret
);

	localparam UIntX MSTATUS_WMASK = UIntX'('h0000_0000_0000_0000) ;
	localparam UIntX MTVEC_WMASK  = 'hffff_ffff_ffff_fffc;
	localparam UIntX MSCRATCH_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX MEPC_WMASK   = 'hffff_ffff_ffff_fffe;
	localparam UIntX MCAUSE_WMASK = 'hffff_ffff_ffff_ffff;
	localparam UIntX MTVAL_WMASK  = 'hffff_ffff_ffff_ffff;

	PrivMode mode;

	//CSRR(W|S|C)かどうか
	logic is_wsc;
	assign is_wsc = ctrl.is_csr && ctrl.funct3[1:0] != 0;

	logic is_mret;
	assign is_mret = (inst_bits == 32'h30200073);

	// will_not_write_csr: CSRRSI / CSRRCI で rs1=0 のとき → 読み取り専用動作
	logic will_not_write_csr;
	assign will_not_write_csr =
		((ctrl.funct3[1:0] == 2'b10) || (ctrl.funct3[1:0] == 2'b11))
		&& (rs1_addr == 5'd0);

	// expt_write_readonly_csr: 書き込み系で、書き込み禁止CSRにアクセスしたとき
	logic expt_write_readonly_csr;
	assign expt_write_readonly_csr =
		(is_wsc && !will_not_write_csr && (csr_addr[11:10] == 2'b11));

	//CSR register create
	UIntX misa;
	assign misa = {
    2'd2,                                         // MISAの最上位2ビット (MISA[XLEN-1:XLEN-2])
    1'b0,                                         // 次の1ビット
    {(XLEN - 2 - 1 - 26){1'b0}},                  // 'repeat XLEN - 28' に相当する0ビットの繰り返し
                                                  // (XLEN - 28) = XLEN - (2 + 1 + 25) ではなく、
                                                  // XLEN - (2 + 1 + 26) = XLEN - 29 が正しいため、
                                                  // XLEN - 2 - 1 - 26 = XLEN - 29 で計算します。
    26'b00000000000001000100000101                // MISAの最下位26ビット
	};

	UIntX mhartid = 0;
	UIntX mstatus, mtvec, mscratch, mepc, mcause, mtval;
	UInt64 mcycle;

	//Exception
	logic raise_expt;
	assign raise_expt = valid && (expt_info.valid || expt_write_readonly_csr);
	UIntX expt_cause ;
	always_comb begin
		if(expt_info.valid) begin
			expt_cause = expt_info.cause;
		end else if (expt_write_readonly_csr) begin
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

	// Trap Return
	assign trap_return = valid && is_mret && !raise_expt;

	//Trap
	assign raise_trap  = raise_expt || trap_return;
	UIntX  trap_cause ;
	assign trap_cause = expt_cause;
	assign trap_vector = (raise_expt) ? mtvec : mepc;

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
			MCYCLE  : rdata = mcycle;
			MINSTRET: rdata = minstret;
			MSCRATCH: rdata = mscratch;
			MEPC    : rdata = mepc;
			MCAUSE  : rdata = mcause;
			MTVAL   : rdata = mtval;
			default       : rdata = 'x;
		endcase

		// write mask
		case (csr_addr)
			MSTATUS  : wmask = MSTATUS_WMASK;
			MTVEC    : wmask = MTVEC_WMASK;
			MSCRATCH : wmask = MSCRATCH_WMASK;
			MEPC     : wmask = MEPC_WMASK;
			MCAUSE   : wmask = MCAUSE_WMASK;
			MTVAL    : wmask = MTVAL_WMASK;
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


	always_ff @(posedge clk or negedge rst) begin
		if (!rst) begin
			mode     <=  M;
			mstatus  <= '0;
			mtvec    <= '0;
			mscratch <= '0;
			mcycle   <= '0;
			mepc     <= '0;
			mcause   <= '0;
			mtval    <= '0;
		end else begin
			mcycle += 1;
			if (valid) begin
				if (raise_trap) begin
					if (raise_expt) begin
						mepc   <= pc;
						mcause <= trap_cause;
						mtval  <= expt_value;
					end
				end else begin
					if (is_wsc) begin
						case (csr_addr)
							MSTATUS  : mstatus  <= wdata;
							MTVEC    : mtvec    <= wdata;
							MSCRATCH : mscratch <= wdata;
							MEPC     : mepc     <= wdata;
							MCAUSE   : mcause   <= wdata;
							MTVAL    : mtval    <= wdata;
							default  : /* do nothing */ ;
						endcase
					end
				end
			end
		end
	end
endmodule : csrunit
