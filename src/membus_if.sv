interface membus_if #(
	parameter int DATA_WIDTH = 32,
	parameter int ADDR_WIDTH = 32
	);
	logic valid;
	logic ready;
	logic[ADDR_WIDTH-1:0] addr;
	logic wen;
	logic [DATA_WIDTH-1:0] wdata;
	logic [(DATA_WIDTH/8)-1:0] wmask;
	logic rvalid;
	logic [DATA_WIDTH-1:0] rdata;

	modport master (
		import wmask_expand,
		output valid,
		input  ready,
		output addr,
		output wen,
		output wdata,
		output wmask,
		input  rvalid,
		input  rdata
	);

	modport slave(
		import wmask_expand,
		input  valid,
		output ready,
		input  addr,
		input  wen,
		input  wdata,
		input  wmask,
		output rvalid,
		output rdata
	);

		//get DATA_WIDTH-bit expanded wmask
		function automatic logic [DATA_WIDTH-1:0] wmask_expand(input logic [(DATA_WIDTH/8)-1:0] wmask);
			logic[DATA_WIDTH-1:0] result;
			integer i;

			for (i=0; i< DATA_WIDTH; i = i+1) begin
				result[i] = wmask[i/8];
			end

			return result;
		endfunction
endinterface

