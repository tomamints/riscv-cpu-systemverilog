import eei::*;
import corectrl::*;

module inst_decoder(
	input Inst bits,
	output InstCtrl ctrl,
	output UIntX imm
	);
	logic [11:0] imm_i_g = bits[31:20];
	logic [11:0] imm_s_g = {bits[31:25],bits[11:7]};
	logic [11:0] imm_b_g = {bits[31],bits[7],bits[30:25],bits[11:8]};
	logic [19:0] imm_u_g = bits[31:12];
	logic [19:0] imm_j_g = {bits[31],bits[19:12],bits[20],bits[30:21]};

	UIntX imm_i = {{(XLEN - $bits(imm_i_g)){bits[31]}}, imm_i_g};
	UIntX imm_s = {{(XLEN - $bits(imm_s_g)){bits[31]}}, imm_s_g};
	UIntX imm_b = {{(XLEN - $bits(imm_b_g) - 1){bits[31]}},  imm_b_g,1'b0};
	UIntX imm_u = {{(XLEN - $bits(imm_u_g) - 12){bits[31]}} , imm_u_g, 12'b0};
	UIntX imm_j = {{(XLEN - $bits(imm_j_g) - 1){bits[31]}} , imm_j_g, 1'b0};

	logic[6:0] op = bits[6:0];
	logic[6:0] f7 = bits[31:25];
	logic[2:0] f3 = bits[14:12];

	localparam T = 1'b1;
	localparam F = 1'b0;

	always_comb begin
		case (op)
			OP_LUI,OP_AUIPC        : imm = imm_u;
			OP_JAL                 : imm = imm_j;
			OP_JALR, OP_LOAD       : imm = imm_i;
			OP_OP_IMM,OP_OP_IMM_32 : imm = imm_i;
			OP_BRANCH              : imm = imm_b;
			OP_STORE               : imm = imm_s;
			default                : imm = 'x;
		endcase
		ctrl.itype    = INST_X;
		ctrl.rwb_en   = F;
		ctrl.is_lui   = F;
		ctrl.is_aluop = F;
		ctrl.is_muldiv = F;
		ctrl.is_op32  = F;
		ctrl.is_jump  = F;
		ctrl.is_load  = F;

		ctrl.funct3 = f3;
		ctrl.funct7 = f7;

		ctrl.is_csr = F;

		unique case (op)
		OP_LUI: begin
			ctrl.itype = INST_U;
			ctrl.rwb_en = T;
			ctrl.is_lui = T;
		end
		OP_AUIPC: begin
			ctrl.itype = INST_U;
			ctrl.rwb_en = T;
		end
		OP_JAL:begin
			ctrl.itype = INST_J;
			ctrl.rwb_en = T;
			ctrl.is_jump = T;
		end
		OP_JALR:begin
			ctrl.itype = INST_I;
			ctrl.rwb_en = T;
			ctrl.is_jump = T;
		end
		OP_BRANCH:begin
			ctrl.itype = INST_B;
		end
		OP_LOAD:begin
			ctrl.itype = INST_I;
			ctrl.rwb_en = T;
			ctrl.is_load = T;
		end
		OP_STORE:begin
			ctrl.itype = INST_S;
		end
		OP_OP:begin
			ctrl.itype = INST_R;
			ctrl.rwb_en = T;
			ctrl.is_aluop = T;
		    ctrl.is_muldiv = f7 == 7'b0000001;
		end
		OP_OP_IMM:begin
			ctrl.itype = INST_I;
			ctrl.rwb_en = T;
			ctrl.is_aluop = T;
		end
		OP_OP_32:begin
			ctrl.itype    = INST_R;
			ctrl.rwb_en   = T;
			ctrl.is_aluop = T;
		    ctrl.is_muldiv = f7 == 7'b0000001;
			ctrl.is_op32  = T;
		end
		OP_OP_IMM_32:begin
			ctrl.itype    = INST_I;
			ctrl.rwb_en   = T;
			ctrl.is_aluop = T;
			ctrl.is_op32  = T;
		end
		OP_SYSTEM:begin
			ctrl.itype = INST_I;
			ctrl.rwb_en = T;
			ctrl.is_csr = T;
		end
		default: begin
			ctrl.itype = INST_X;
		end
	endcase
end
endmodule :inst_decoder
