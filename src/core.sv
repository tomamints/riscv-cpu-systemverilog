import eei::*;
import corectrl::*;

module core (
	input logic clk,
	input logic rst,
	i_membus.master i_membus,
	Membus.master d_membus,
	output UIntX led
);

	typedef struct packed {
		logic[XLEN-1:0] addr;
		logic[ILEN-1:0] bits;
	}if_fifo_type;

	typedef struct packed {
		Addr addr;
		Inst bits;
		InstCtrl ctrl;
		UIntX imm;
		ExceptionInfo expt;
	}exq_type;


	typedef struct packed {
		Addr addr;
		Inst bits;
		InstCtrl ctrl;
		UIntX imm;
		ExceptionInfo expt;
		UIntX alu_result;
		logic[4:0] rs1_addr;
		UIntX rs1_data;
		UIntX rs2_data;
		logic br_taken;
		Addr jump_addr;
	}memq_type;

	typedef struct packed {
		Addr addr;
		Inst bits;
		InstCtrl ctrl;
		UIntX imm;
		UIntX alu_result;
		UIntX mem_rdata;
		UIntX csr_rdata;
		logic raise_trap;
	}wbq_type;


	//命令mメモリ->IF の　FIFO
	logic if_fifo_wready;
	logic if_fifo_wready_two;
	logic if_fifo_wvalid;
	if_fifo_type  if_fifo_wdata;
	logic if_fifo_rready;
	logic if_fifo_rvalid;
	if_fifo_type  if_fifo_rdata;


	//ID -> EX FIFO
	logic exq_wready;
	logic exq_wvalid;
	exq_type exq_wdata;
	logic exq_rready;
	logic exq_rvalid;
	exq_type exq_rdata;

	//EX -> MEM FIFO
	logic memq_wready;
	logic memq_wvalid;
	memq_type memq_wdata;
	logic memq_rready;
	logic memq_rvalid;
	memq_type memq_rdata;

	//MEM -> WB FIFO
	logic wbq_wready;
	logic wbq_wvalid;
	wbq_type wbq_wdata;
	logic wbq_rready;
	logic wbq_rvalid;
	wbq_type wbq_rdata;


//////////////////////// IF Stage /////////////////////

	Addr if_pc;//現在のプログラムカウンタ
	logic if_is_requested;//現在フェッチ要求中かどうか
	Addr if_pc_requested;//次に読むアドレス

	Addr if_pc_next;
	always_comb begin //次のPC作成
		if_pc_next = if_pc+4;
	end

	logic control_hazard;
	Addr control_hazard_pc_next;

	fifo#(
		.DATA_TYPE(if_fifo_type),
		.WIDTH(3)
	)if_fifo(
		.clk (clk),
		.rst (rst),
		.flush(control_hazard),
		.wready(if_fifo_wready),
		.wready_two(if_fifo_wready_two),
		.wvalid(if_fifo_wvalid),
		.wdata(if_fifo_wdata),
		.rready(if_fifo_rready),
		.rvalid(if_fifo_rvalid),
		.rdata(if_fifo_rdata)
	);



	always_comb begin
		i_membus.valid = if_fifo_wready_two;
		i_membus.addr = if_pc;
		i_membus.wen = 1'b0;
		i_membus.wdata = 'x; //未定 32bit全部X
	end



	//命令フェッチステートマシン
	//

	always_ff @(posedge clk or negedge rst) begin
		if(!rst)begin
			if_pc <= INITIAL_PC;
			if_is_requested <= 1'b0;
			if_pc_requested <= INITIAL_PC;
			if_fifo_wvalid <= 1'b0;
			if_fifo_wdata <= '{default:0};
		end else begin
			if(control_hazard)begin
				if_pc <= control_hazard_pc_next;
				if_is_requested <= 0;
				if_fifo_wvalid <= 0;
			end else begin
				if(if_is_requested)begin
					if(i_membus.rvalid)begin
						if_is_requested <= i_membus.ready && i_membus.valid;
						if(i_membus.ready && i_membus.valid) begin
							if_pc <= if_pc_next;
							if_pc_requested <= if_pc;
						end
					end
				end else begin
					if(i_membus.ready && i_membus.valid) begin
						if_is_requested <= 1;
						if_pc           <= if_pc_next;
						if_pc_requested <= if_pc;
					end
				end
				if(if_is_requested && i_membus.rvalid)begin
					if_fifo_wvalid     <= 1;
					if_fifo_wdata.addr <= if_pc_requested;
					if_fifo_wdata.bits <= i_membus.rdata;
				end else begin
					if (if_fifo_wvalid && if_fifo_wready)begin
						if_fifo_wvalid <= 0;
					end
				end
			end
		end
	end

/*
	always_ff @(posedge clk) begin
		if (if_fifo_rvalid) begin
			$display("[ID] RECEIVED inst(bits)=%h pc=%h",
				if_fifo_rdata.bits,
				if_fifo_rdata.addr
			);
		end
	end
*/


////////////////// ID Stage /////////////////////
	logic ids_valid = if_fifo_rvalid;
	Addr ids_pc = if_fifo_rdata.addr;
	Inst ids_inst_bits = if_fifo_rdata.bits;
	logic ids_inst_valid;
	InstCtrl ids_ctrl;
	UIntX ids_imm;

	inst_decoder decoder (
		.bits (ids_inst_bits),
		.valid (ids_inst_valid),
		.ctrl (ids_ctrl),
		.imm  (ids_imm)
	);

	always_comb begin
		//ID -> EX
		if_fifo_rready = exq_wready;
		exq_wvalid     = if_fifo_rvalid;
		exq_wdata.addr = if_fifo_rdata.addr;
		exq_wdata.bits = if_fifo_rdata.bits;
		exq_wdata.ctrl = ids_ctrl;
		exq_wdata.imm  = ids_imm;
		// exception
		exq_wdata.expt = '0;
		if (!ids_inst_valid) begin
			//illegal instruction
			exq_wdata.expt.valid = 1;
			exq_wdata.expt.cause = ILLEGAL_INSTRUCTION;
			exq_wdata.expt.value = {{(XLEN-ILEN){1'b0}},ids_inst_bits};
		end else if (ids_inst_bits == 32'h00000073) begin
			//ECALL
			exq_wdata.expt.valid = 1;
			exq_wdata.expt.cause = ENVIRONMENT_CALL_FROM_M_MODE;
			exq_wdata.expt.value = 0;
		end else if (ids_inst_bits == 32'h00100073) begin
			//EBREAK
			exq_wdata.expt.valid = 1;
			exq_wdata.expt.cause = BREAKPOINT;
			exq_wdata.expt.value = ids_pc;
		end
	end

	////////////////EX Stage /////////////////

	logic exs_valid      = exq_rvalid;
	Addr  exs_pc         = exq_rdata.addr;
	Inst  exs_inst_bits  = exq_rdata.bits;
	InstCtrl  exs_ctrl   = exq_rdata.ctrl;
	UIntX  exs_imm       = exq_rdata.imm;


	//レジスタ
	UIntX regfile [31:0]; //regfileを32個作った

	//レジスタ番号
	logic [4:0] exs_rs1_addr = exs_inst_bits[19:15];
	logic [4:0] exs_rs2_addr = exs_inst_bits[24:20];

	UIntX exs_rs1_data,exs_rs2_data;

	//ソースレジスタのデータ
	always_comb begin
		exs_rs1_data = (exs_rs1_addr == 0) ? '0 : regfile[exs_rs1_addr];
		exs_rs2_data = (exs_rs2_addr == 0) ? '0 : regfile[exs_rs2_addr];
	end

	// Data Hazard

	logic exs_mem_data_hazard, exs_wb_data_hazard, exs_data_hazard;


	assign exs_mem_data_hazard = mems_valid && mems_ctrl.rwb_en && ((mems_rd_addr == exs_rs1_addr) || (mems_rd_addr == exs_rs2_addr));
	assign exs_wb_data_hazard = wbs_valid && wbs_ctrl.rwb_en && (wbs_rd_addr == exs_rs1_addr || wbs_rd_addr == exs_rs2_addr);
	assign exs_data_hazard = exs_mem_data_hazard || exs_wb_data_hazard;
/*
	always_ff @(posedge clk)begin
		$display("DECODE: inst=%h itype=%0d is_muldiv=%b funct7=%0d imm=%h",
         ids_inst_bits,
         ids_ctrl.itype,
         ids_ctrl.is_muldiv,
         ids_ctrl.funct7,
         ids_imm);
		$display("mem_data_hazard = %d",exs_mem_data_hazard);
		$display("mems_valid = %d",mems_valid);
		$display("mems_ctrl.rwb_en = %d",mems_ctrl.rwb_en);
		$display("mems_rd_addr = %d",mems_rd_addr);
		$display("exs_rs1_addr = %d",exs_rs1_addr);
		$display("compare = %d",mems_rd_addr == exs_rs1_addr);
	end
*/
	//ALU

	UIntX exs_op1,exs_op2,exs_alu_result;

	always_comb begin
		case (exs_ctrl.itype)
			INST_R, INST_B: begin
				exs_op1 = exs_rs1_data;
				exs_op2 = exs_rs2_data;
			end
			INST_I, INST_S: begin
				exs_op1 = exs_rs1_data;
				exs_op2 = exs_imm;
			end
			INST_U, INST_J: begin
				exs_op1 = exs_pc;
				exs_op2 = exs_imm;
			end
			default: begin
				exs_op1 = 'x;
				exs_op2 = 'x;
			end
		endcase
	end

	alu alum (
		.ctrl (exs_ctrl),
		.op1  (exs_op1),
		.op2  (exs_op2),
		.result(exs_alu_result)
	);


	logic exs_muldiv_valid;
	assign exs_muldiv_valid = exs_valid && exs_ctrl.is_muldiv && !exs_data_hazard && !exs_muldiv_is_requested;
	logic exs_muldiv_ready;
	logic exs_muldiv_rvalid;
	UIntX exs_muldiv_result;


	muldivunit mdu (
		.clk    (clk),
		.rst    (rst),
		.valid  (exs_muldiv_valid),
		.ready  (exs_muldiv_ready),
		.funct3 (exs_ctrl.funct3),
		.is_op32(exs_ctrl.is_op32),
		.op1    (exs_op1),
		.op2    (exs_op2),
		.rvalid (exs_muldiv_rvalid),
		.result (exs_muldiv_result)
	);


	logic exs_muldiv_is_requested;

	always_ff @(posedge clk) begin
		if (rst) begin
			exs_muldiv_is_requested <= 1'b0;
		end else begin
			// 次のステージに遷移
			if (exq_rvalid && exq_rready) begin
				exs_muldiv_is_requested <= 1'b0;
			end else begin
				// muldivunit にリクエストしたか判定
				if (exs_muldiv_valid && exs_muldiv_ready) begin
					exs_muldiv_is_requested <= 1'b1;
				end
			end
		end
	end

	logic exs_muldiv_rvalided;
	logic exs_muldiv_stall;

	assign exs_muldiv_stall = exs_ctrl.is_muldiv && !exs_muldiv_rvalid && !exs_muldiv_rvalided;

	always_ff @(posedge clk) begin
		if (rst) begin
			exs_muldiv_rvalided <= 1'b0;
		end else begin
			// 次のステージに遷移
			if (exq_rvalid && exq_rready) begin
				exs_muldiv_rvalided <= 1'b0;
			end else begin
				// muldivunitの処理が完了していたら1にする
				exs_muldiv_rvalided <= exs_muldiv_rvalided | exs_muldiv_rvalid;
			end
		end
	end


	logic exs_brunit_take;
	brunit bru(
		.funct3(exs_ctrl.funct3),
		.op1(exs_op1),
		.op2(exs_op2),
		.take(exs_brunit_take)
	);

	logic exs_stall;
	assign exs_stall = exs_data_hazard || exs_muldiv_stall;

	logic instruction_address_misaligned;
	logic loadstore_address_misaligned;

	always_comb begin
		//EX-> MEM
		exq_rready  = memq_wready && !exs_stall;
		memq_wvalid = exq_rvalid && !exs_stall;
		memq_wdata.addr = exq_rdata.addr;
		memq_wdata.bits = exq_rdata.bits;
		memq_wdata.ctrl = exq_rdata.ctrl;
		memq_wdata.imm = exq_rdata.imm;
		memq_wdata.rs1_addr = exs_rs1_addr;
		memq_wdata.rs1_data = exs_rs1_data;
		memq_wdata.rs2_data = exs_rs2_data;
		memq_wdata.alu_result = (exs_ctrl.is_muldiv) ? exs_muldiv_result : exs_alu_result;
		memq_wdata.br_taken = exs_ctrl.is_jump || inst_is_br(exs_ctrl) && exs_brunit_take;
		memq_wdata.jump_addr = (inst_is_br(exs_ctrl)) ? exs_pc + exs_imm : exs_alu_result & ~1;
		// exception
		instruction_address_misaligned = (memq_wdata.br_taken && memq_wdata.jump_addr[1:0] != 2'b00);
		case (exs_ctrl.funct3[1:0])
			2'b00 : loadstore_address_misaligned = inst_is_memop(exs_ctrl) && 0;
			2'b01 : loadstore_address_misaligned = inst_is_memop(exs_ctrl) && (exs_alu_result[0]   != 1'b0); //H
			2'b10 : loadstore_address_misaligned = inst_is_memop(exs_ctrl) && (exs_alu_result[1:0] != 2'b0);
			2'b11 : loadstore_address_misaligned = inst_is_memop(exs_ctrl) && (exs_alu_result[2:0] != 3'b0);
			default : loadstore_address_misaligned = inst_is_memop(exs_ctrl) && 0;
		endcase
		memq_wdata.expt = exq_rdata.expt;
		if (!memq_rdata.expt.valid)begin
			if ( instruction_address_misaligned)begin
				memq_wdata.expt.valid = 1;
				memq_wdata.expt.cause = INSTRUCTION_ADDRESS_MISALIGNED;
				memq_wdata.expt.value = memq_wdata.jump_addr;
			end else if (loadstore_address_misaligned) begin
				memq_wdata.expt.valid = 1;
				memq_wdata.expt.cause = (exs_ctrl.is_load) ? LOAD_ADDRESS_MISALIGNED : STORE_AMO_ADDRESS_MISALIGNED;
				memq_wdata.expt.value = exs_alu_result;
			end
		end
	end

	////////////MEM Stage ////////////////

	logic mems_is_new;
	logic mems_valid      = memq_rvalid;
	Addr  mems_pc         = memq_rdata.addr;
	Inst  mems_inst_bits  = memq_rdata.bits;
	InstCtrl  mems_ctrl   = memq_rdata.ctrl;
	ExceptionInfo  mems_expt   = memq_rdata.expt;
	logic[4:0]  mems_rd_addr       = mems_inst_bits[11:7];

	assign control_hazard = mems_valid && (csru_raise_trap || mems_ctrl.is_jump || memq_rdata.br_taken);
	assign control_hazard_pc_next = (csru_raise_trap) ? csru_trap_vector : memq_rdata.jump_addr;


	always_ff @(posedge clk or negedge rst) begin
		if(!rst)begin
			mems_is_new <= 1'b0;
		end else begin
			if(memq_rvalid)begin
				mems_is_new <= memq_rready;
			end else begin
				mems_is_new <= 1'b1;
			end
		end
	end

	UIntX memu_rdata;
	logic memu_stall;
	memunit memu (
		.clk    (clk),
		.rst    (rst),
		.valid  (mems_valid && !mems_expt.valid),
		.is_new (mems_is_new),
		.ctrl   (mems_ctrl),
		.addr   (memq_rdata.alu_result),
		.rs2    (memq_rdata.rs2_data),
		.rdata  (memu_rdata),
		.stall  (memu_stall),
		.membus (d_membus.master)
	);

	UIntX csru_rdata;
	logic csru_raise_trap;
	Addr csru_trap_vector;
	csrunit csru(
		.clk      (clk),
		.rst      (rst),
		.valid    (mems_valid),
		.pc       (mems_pc),
		.inst_bits(mems_inst_bits),
		.ctrl     (mems_ctrl),
		.expt_info(mems_expt),
		.rd_addr  (mems_rd_addr),
		.csr_addr (mems_inst_bits[31:20]),
		.rs1_addr (memq_rdata.rs1_addr),
		.rs1_data (memq_rdata.rs1_data),
		.rdata       (csru_rdata),
		.raise_trap  (csru_raise_trap),
		.trap_vector (csru_trap_vector)
	);


	always_comb begin
		//MEM -> WB
		memq_rready = wbq_wready && !memu_stall;
		wbq_wvalid = memq_rvalid && !memu_stall;
		wbq_wdata.addr = memq_rdata.addr;
		wbq_wdata.bits = memq_rdata.bits;
		wbq_wdata.ctrl = memq_rdata.ctrl;
		wbq_wdata.imm = memq_rdata.imm;
		wbq_wdata.alu_result = memq_rdata.alu_result;
		wbq_wdata.mem_rdata = memu_rdata;
		wbq_wdata.csr_rdata = csru_rdata;
		wbq_wdata.raise_trap = csru_raise_trap;
	end

	//////////WB Stage //////////

	logic wbs_valid      = wbq_rvalid;
	Addr  wbs_pc         = wbq_rdata.addr;
	Inst  wbs_inst_bits  = wbq_rdata.bits;
	InstCtrl  wbs_ctrl   = wbq_rdata.ctrl;
	UIntX  wbs_imm       = wbq_rdata.imm;

	logic [4:0] wbs_rd_addr = wbs_inst_bits[11:7];
	UIntX wbs_wb_data;

	always_comb begin
		if (wbs_ctrl.is_lui) begin
			wbs_wb_data = wbs_imm;
		end else if (wbs_ctrl.is_jump) begin
			wbs_wb_data = wbs_pc + (64'd4); // XLEN 64 前提
		end else if (wbs_ctrl.is_load) begin
			wbs_wb_data = wbq_rdata.mem_rdata;
		end else if (wbs_ctrl.is_csr) begin
			wbs_wb_data = wbq_rdata.csr_rdata;
		end else begin
			wbs_wb_data = wbq_rdata.alu_result;
		end
	end

	always_ff @(posedge clk)begin
		if(wbs_valid && wbs_ctrl.rwb_en && !wbq_rdata.raise_trap)begin
			regfile[wbs_rd_addr] <= wbs_wb_data;
		end
	end

	always_comb begin
		//WB->END
		wbq_rready = 1;
	end


	assign led = '0;

	/////////////DEBUG ////////////////

	logic[63:0] clock_count;
/*
	always_ff @(posedge clk or negedge rst) begin
		if(!rst)begin
			clock_count <= 64'd0;
		end else begin
			clock_count <= clock_count + 64'd1;

			$display("");
			$display("# %d", clock_count);


			$display("IF ------");
			$display("     pc : %h", if_pc);
			$display(" is req : %b", if_is_requested);
			$display(" pc req : %h", if_pc_requested);
			$display("ID ------");
			if(ids_valid) begin
				$display("  %h : %h", ids_pc, if_fifo_rdata.bits);
                $display("  itype : %b", ids_ctrl.itype);
                $display("  imm   : %h", ids_imm);
			end
			$display("EX -----");
			if(exs_valid)begin
				$display("  %h : %h", exq_rdata.addr, exq_rdata.bits);
				$display("  op1     : %h", exs_op1);
				$display("  op2     : %h", exs_op2);
				$display("  alu     : %h", exs_alu_result);
				$display("  rs1/rs2 : %0d/%0d", exs_rs1_addr, exs_rs2_addr);
				$display("  reg1/reg2 : %h/%h", exs_rs1_data, exs_rs2_data);
				$display("  dhazard : %b", exs_data_hazard);
				$display("  mem_hazard=%b wb_hazard=%b", exs_mem_data_hazard, exs_wb_data_hazard);
				$display("  muldiv_stall : %b", exs_muldiv_stall);
				$display("  wbs_valid=%b wbs_ctrl.rwb_en=%b wbs_rd=%0d",
						wbs_valid, wbs_ctrl.rwb_en, wbs_rd_addr);
				$display("  exq_rready=%d memq_wready=%d if_fifo_rready=%d",
                            exq_rready,memq_wready,if_fifo_rready);
				if (exs_ctrl.is_muldiv && exs_muldiv_stall)begin
					$display(" muldiv result : %h",exs_muldiv_result);
				end
				if (inst_is_br(exs_ctrl))begin
					$display("  br take : ", exs_brunit_take);
				end
			end
			$display("MEM -----");
			if (mems_valid)begin
                $display("  %h : %h", memq_rdata.addr, memq_rdata.bits);
				$display("	mem stall : %h", memu_stall);
				$display("	mem rdata : %h", memu_rdata);
				if (mems_ctrl.is_csr || csru_raise_trap)begin
					$display(" csr rdata : %h", csru_rdata);
					$display(" csr trap  : %b", csru_raise_trap);
					$display(" csr vec   : %h", csru_trap_vector);
				end
				if (memq_rdata.br_taken)begin
					$display(" JUMP TO : %h", memq_rdata.jump_addr);
				end
			end
			$display("WB ----");
			if(wbs_valid) begin
				$display("  %h : %h", wbq_rdata.addr, wbq_rdata.bits);
				if(wbs_ctrl.rwb_en && !wbq_rdata.raise_trap) begin
					$display("  reg[%d] <= %h", wbs_rd_addr, wbs_wb_data);
				end
			end
		end
	end
*/
	////////////////////////FIFO/////////////////////
	fifo#(
		.DATA_TYPE(exq_type),
		.WIDTH(1)
	)id_ex_fifo(
		.clk (clk),
		.rst (rst),
		.flush(control_hazard),
		.wready_two(),         // ← 追加
		.wready(exq_wready),
		.wvalid(exq_wvalid),
		.wdata(exq_wdata),
		.rready(exq_rready),
		.rvalid(exq_rvalid),
		.rdata(exq_rdata)
	);

	fifo#(
		.DATA_TYPE(memq_type),
		.WIDTH(1)
	)ex_mem_fifo(
		.clk (clk),
		.rst (rst),
		.flush(control_hazard),
		.wready(memq_wready),
		.wready_two(),         // ← 追加
		.wvalid(memq_wvalid),
		.wdata(memq_wdata),
		.rready(memq_rready),
		.rvalid(memq_rvalid),
		.rdata(memq_rdata)
	);


	fifo#(
		.DATA_TYPE(wbq_type),
		.WIDTH(1)
	)mem_wbq_fifo(
		.clk (clk),
		.rst (rst),
		.flush(0),
		.wready(wbq_wready),
		.wready_two(),         // ← 追加
		.wvalid(wbq_wvalid),
		.wdata(wbq_wdata),
		.rready(wbq_rready),
		.rvalid(wbq_rvalid),
		.rdata(wbq_rdata)
	);


endmodule : core
