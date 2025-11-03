import eei::*;

package corectrl;
	typedef enum logic [5:0]{
		INST_X = 6'b000000,
		INST_R = 6'b000001,
		INST_I = 6'b000010,
		INST_S = 6'b000100,
		INST_B = 6'b001000,
		INST_U = 6'b010000,
		INST_J = 6'b100000
	}InstType;

	typedef struct packed{
		InstType itype; //命令の形式
		logic rwb_en;   //レジスタに書き込むかどうか
		logic is_lui;   //LUI命令である
		logic is_aluop; //ALUを利用するか
		logic is_muldiv;//M拡張命令
		logic is_op32;  //OP-32またはOP-IMM32-
		logic is_jump;  //ジャンプ命令である
		logic is_load;  //ロード命令である
		logic is_csr;   //CSR命令である
		logic[2:0] funct3;  //命令のfunct3フィールド
		logic [6:0] funct7; //命令のfunct7フィールド
	}InstCtrl;

	function automatic logic inst_is_memop(input InstCtrl ctrl);
		return (ctrl.itype == INST_S) || ctrl.is_load;
	endfunction

	function automatic logic inst_is_store(input InstCtrl ctrl);
		return inst_is_memop(ctrl) && !ctrl.is_load;
	endfunction
	
	function automatic logic inst_is_br(input InstCtrl ctrl);
		return ctrl.itype == INST_B;
	endfunction
endpackage:corectrl
