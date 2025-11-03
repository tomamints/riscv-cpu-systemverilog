import eei::*;
import corectrl::*;

module csrunit (
	input  logic clk,
	input  logic rst,
	input  logic valid,
	input  Addr  pc,
	input  InstCtrl ctrl,
	input  logic [4:0] rd_addr,
	input  logic [11:0] csr_addr,
	input  UIntX rs1,
	output UIntX rdata,
	output logic raise_trap,
	output Addr  trap_vector
);

	localparam UIntX MTVEC_WMASK  = 'hffff_ffff_ffff_fffc;
	localparam UIntX MEPC_WMASK   = 'hffff_ffff_ffff_fffc;
	localparam UIntX MCAUSE_WMASK = 'hffff_ffff_ffff_ffff;

	UIntX mtvec, mepc, mcause;

	// CSR write controls
	logic csr_has_write  = ctrl.is_csr && (ctrl.funct3 != 3'b000);
	logic csr_is_setclr  = ctrl.is_csr && (ctrl.funct3[1:0] != 2'b01);
	logic csr_src_is_zero = (rs1 == '0);
	logic csr_write_enable = valid && csr_has_write &&
		(!(csr_is_setclr && csr_src_is_zero));

	// ECALL detection (M-mode only)
	logic is_ecall;
	assign is_ecall =  ((ctrl.is_csr && (csr_addr == 0)) && (rs1[4:0] == 0) && (ctrl.funct3 == 0) && (rd_addr == 0));

	logic is_mret;
	assign is_mret =  ((ctrl.is_csr && (csr_addr == 12'b0011000_00010)) && (rs1[4:0] == 0) && (ctrl.funct3 == 0) && (rd_addr == 0));

	logic raise_expt;
	assign raise_expt = valid && is_ecall;
	UIntX trap_cause = ENVIRONMENT_CALL_FROM_M_MODE;

	assign raise_trap  = raise_expt || (valid && is_mret);
	assign trap_vector = (raise_expt) ? mtvec : mepc;

	UIntX csr_read_data;
	UIntX csr_wmask;
	UIntX wdata_raw;
	UIntX wdata_masked;

	always_comb begin
		// Read path
		csr_read_data = '0;
		csr_wmask     = '0;
		unique case (csr_addr)
			MTVEC: begin
				csr_read_data = mtvec;
				csr_wmask     = MTVEC_WMASK;
			end
			MEPC: begin
				csr_read_data = mepc;
				csr_wmask     = MEPC_WMASK;
			end
			MCAUSE: begin
				csr_read_data = mcause;
				csr_wmask     = MCAUSE_WMASK;
			end
			default: ;
		endcase

		// Write data generation
		unique case (ctrl.funct3)
			3'b001, 3'b101: wdata_raw = rs1;                  // CSRRW(I)
			3'b010, 3'b110: wdata_raw = csr_read_data | rs1;  // CSRRS(I)
			3'b011, 3'b111: wdata_raw = csr_read_data & ~rs1; // CSRRC(I)
			default:        wdata_raw = csr_read_data;
		endcase

		wdata_masked = (wdata_raw & csr_wmask) | (csr_read_data & ~csr_wmask);
	end

	assign rdata = csr_read_data;

	always_ff @(posedge clk or negedge rst) begin
		if (!rst) begin
			mtvec  <= '0;
			mepc   <= '0;
			mcause <= '0;
		end else begin
			if (csr_write_enable) begin
				unique case (csr_addr)
					MTVEC:  mtvec  <= wdata_masked;
					MEPC:   mepc   <= wdata_masked;
					MCAUSE: mcause <= wdata_masked;
					default: ;
				endcase
			end

			if (raise_expt) begin
				mepc   <= pc;
				mcause <= trap_cause;
			end
		end
	end
endmodule : csrunit
