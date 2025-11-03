import eei::*;
import corectrl::*;
module alu (
	input InstCtrl ctrl,
	input UIntX op1,
	input UIntX op2,
	output UIntX result
	);

	function automatic logic[63:0] sel_w (
		input logic        is_op32,
		input logic [31:0] value32,
		input logic [63:0] value64
	);

	if(is_op32)
		//下位32bit + 符号拡張（value32[31]を32かい繰り返す）
	    sel_w = {{32{value32[31]}},value32};
	else
		sel_w = value64;
	endfunction
	
	UIntX add, sub,sll,srl,slt,sltu;
	UInt32 add32,sub32,sll32,srl32;
	SIntX sra;
	SInt32 sra32;
	assign add = op1 + op2;
	assign sub = op1 - op2;
	
	assign add32 = op1[31:0] + op2[31:0];
	assign sub32 = op1[31:0] - op2[31:0];

	assign sll = op1 << op2[5:0];
	assign srl = op1 >> op2[5:0];
	assign sra = $signed(op1) >>> op2[5:0];

	assign sll32 = op1[31:0] << op2[4:0];
	assign srl32 = op1[31:0] >> op2[4:0];
	assign sra32 = $signed(op1[31:0]) >>> op2[4:0];

	assign slt = { {XLEN - 1{1'b0}} , ($signed(op1) < $signed(op2)) };
	assign sltu = { {XLEN - 1{1'b0}} , (op1 < op2) };

	always_comb begin
		if (ctrl.is_aluop) begin
			case (ctrl.funct3)
				3'b000: result = (ctrl.itype == INST_I || ctrl.funct7 == 7'b0000000) ? sel_w(ctrl.is_op32, add32, add) : sel_w(ctrl.is_op32, sub32, sub);
				3'b001: result = sel_w(ctrl.is_op32,sll32,sll);
		        3'b010: result = slt;
        		3'b011: result = sltu;
        		3'b100: result = op1 ^ op2;
        		3'b101: result = (ctrl.funct7[5] == 1'b0) ? sel_w(ctrl.is_op32,srl32,srl) : sel_w(ctrl.is_op32,sra32,sra);
        		3'b110: result = op1 | op2;
        		3'b111: result = op1 & op2;
        		default: result = 'x;	
			endcase
		end else begin
			result = add;
		end
	end
endmodule : alu

	
	
