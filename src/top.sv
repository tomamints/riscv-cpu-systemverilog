import eei::*;

module top#(
	parameter bit MEMORY_FILEPATH_IS_ENV = 1,
	parameter string MEMORY_FILEPATH     = "MEMORY_FILE_PATH"
	)(
`ifdef TEST_MODE
	output logic test_success,
`endif
	input logic clk,
	input logic rst
	);

	//アドレス変換関数 バイト単位→ワード単位
	function automatic logic [MEM_ADDR_WIDTH-1:0] addr_to_memaddr(
		input logic [XLEN-1:0] addr
		);
		//MEM_dATA_WIDTH=32bitn場合は、下位2bitを切り捨ててaddr[11:2]を使う
		addr_to_memaddr = addr[$clog2(MEM_DATA_WIDTH /8) +: MEM_ADDR_WIDTH];
	endfunction

	//membus_if インターフェースを作成

	membus_if #(
		.DATA_WIDTH(MEM_DATA_WIDTH),
		.ADDR_WIDTH(MEM_ADDR_WIDTH)
	) membus();//メモリ用(slave)

	membus_if #(
		.DATA_WIDTH(ILEN),
		.ADDR_WIDTH(XLEN)
	) i_membus();//命令フェッチ用

	membus_if #(
		.DATA_WIDTH(MEM_DATA_WIDTH),
		.ADDR_WIDTH(XLEN)
	) d_membus();//ロードストア命令

	logic memarb_last_i;
	Addr memarb_last_iaddr;

	`ifdef TEST_MODE
		always_ff @(posedge clk)begin
				localparam Addr RISCVTESTS_TOHOST_ADDR = 'h1000;
				$display("check_start");
				if (d_membus.valid && d_membus.ready && d_membus.wen == 1'b1 &&
					d_membus.addr == RISCVTESTS_TOHOST_ADDR &&
					d_membus.wdata[0] == 1'b1) begin

					test_success <= (d_membus.wdata ==1);

				if(d_membus.wdata == 1 ) begin
					$display("riscv-tests success!");
				end else begin
					$display("riscv-tests failed!");
					$error("wdata : %h" , d_membus.wdata);
				end

				$finish;
			end
		end
	`endif

	//メモリアクセスを調停する
	always_ff @(posedge clk or negedge rst) begin
		if (!rst) begin
			memarb_last_i <= 1'b1;
			memarb_last_iaddr <= 0;
		end else if (membus.ready && membus.valid) begin
			memarb_last_i <= ~d_membus.valid;
			memarb_last_iaddr <= i_membus.addr;
		end
	end

	always_comb begin
		i_membus.ready = membus.ready && !d_membus.valid;
		i_membus.rvalid = membus.rvalid && memarb_last_i;
		i_membus.rdata = (memarb_last_iaddr[2] == 0) ? membus.rdata[31:0] : membus.rdata[63:32];

		d_membus.ready = membus.ready;
		d_membus.rvalid = membus.rvalid && !memarb_last_i;
		d_membus.rdata = membus.rdata;

		membus.valid = i_membus.valid | d_membus.valid;
		if (d_membus.valid)begin
			membus.addr = addr_to_memaddr(d_membus.addr);
			membus.wen  = d_membus.wen;
			membus.wdata= d_membus.wdata;
			membus.wmask= d_membus.wmask;
		end else begin
			membus.addr = addr_to_memaddr(i_membus.addr);
			membus.wen  = 0;
			membus.wdata= 'x;
			membus.wmask= 'x;
		end
	end

	memory #(
		.DATA_WIDTH(MEM_DATA_WIDTH),
		.ADDR_WIDTH(MEM_ADDR_WIDTH),
		.FILEPATH_IS_ENV(MEMORY_FILEPATH_IS_ENV),
		.FILEPATH(MEMORY_FILEPATH)
	) mem (
		.clk (clk),
		.rst(rst),
		.membus(membus.slave)
	);

	core c(
		.clk (clk),
		.rst(rst),
		.i_membus(i_membus),
		.d_membus(d_membus)
		);
endmodule :top
