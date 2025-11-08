package eei;

	//定数定義
	localparam int unsigned XLEN = 64; //レジスタのながさ
	localparam int unsigned ILEN = 32; //命令の最大幅（今回は32、圧縮は16?）

	typedef logic [XLEN-1:0] UIntX;
	typedef logic [31:0]     UInt32;
	typedef logic [63:0]     UInt64;
	typedef logic [ILEN-1:0] Inst;
	typedef logic [XLEN-1:0] Addr;
	typedef logic signed [XLEN-1:0] SIntX;
	typedef logic signed [31:0] SInt32;
	typedef logic signed [63:0] SInt64;

	// memory bus data
	localparam int MEMBUS_DATA_WIDTH = 64;

	//RAM
	localparam int RAM_ADDR_WIDTH = 16;
	localparam int RAM_DATA_WIDTH = 64;
	localparam Addr MMAP_RAM_BEGIN = Addr'('h8000_0000);

	//ROM
	localparam int ROM_ADDR_WIDTH = 9;
	localparam int ROM_DATA_WIDTH = 64;
	localparam Addr MMAP_ROM_BEGIN = Addr'('h1000);
	localparam Addr MMAP_ROM_END   = Addr'(MMAP_ROM_BEGIN + 'h3ff);

	// reset vector
	localparam Addr INITIAL_PC = MMAP_ROM_BEGIN;

	localparam logic [6:0] OP_LUI       = 7'b0110111;//localparam→上書きできないように
	localparam logic [6:0] OP_AUIPC     = 7'b0010111;
	localparam logic [6:0] OP_OP        = 7'b0110011;
	localparam logic [6:0] OP_OP_IMM    = 7'b0010011;
	localparam logic [6:0] OP_OP_32     = 7'b0111011;
	localparam logic [6:0] OP_OP_IMM_32 = 7'b0011011;
	localparam logic [6:0] OP_JAL       = 7'b1101111;
	localparam logic [6:0] OP_JALR      = 7'b1100111;
	localparam logic [6:0] OP_BRANCH    = 7'b1100011;
	localparam logic [6:0] OP_LOAD      = 7'b0000011;
	localparam logic [6:0] OP_STORE     = 7'b0100011;
	localparam logic [6:0] OP_SYSTEM    = 7'b1110011;
	localparam logic [6:0] OP_MISC_MEM  = 7'b0001111;

	typedef enum logic [11:0]{
		MTVEC = 12'h305,
		MEPC = 12'h341,
		MCAUSE = 12'h342,
		MTVAL = 12'h343,
		LED   = 12'h800
	} CsrAddr;

	typedef enum UIntX{
		INSTRUCTION_ADDRESS_MISALIGNED = 0,
		ILLEGAL_INSTRUCTION = 2,
		BREAKPOINT = 3,
		LOAD_ADDRESS_MISALIGNED = 4,
		STORE_AMO_ADDRESS_MISALIGNED = 6,
		ENVIRONMENT_CALL_FROM_M_MODE = 11
		} CsrCause;


endpackage : eei
