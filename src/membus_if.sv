import eei::*;

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
		import reset_master,
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

	modport all_input (
		input  valid,
		input  ready,
		input  rvalid,
		input  rdata,
		input  addr,
		input  wen,
		input  wdata,
		input  wmask
	);

	modport response (
		output rvalid,
		output rdata
	);

	modport slave_output (
		output ready,
		output rvalid,
		output rdata
	);

	modport master_output (
		import reset_master,
		output valid,
		output addr,
		output wen,
		output wdata,
		output wmask
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

	/* verilator lint_off MULTIDRIVEN */
	task automatic reset_master();
		valid = 1'b0;
		addr  = '0;
		wen   = 1'b0;
		wdata = '0;
		wmask = '0;
	endtask
	/* verilator lint_on MULTIDRIVEN */

endinterface


interface Membus #(
    parameter int DATA_WIDTH = MEMBUS_DATA_WIDTH,
    parameter int ADDR_WIDTH = XLEN
);
    logic                     valid;
    logic                     ready;
    logic [ADDR_WIDTH-1:0]    addr;
    logic                     wen;
    logic [DATA_WIDTH-1:0]    wdata;
    logic [(DATA_WIDTH/8)-1:0] wmask;
    logic                     rvalid;
    logic [DATA_WIDTH-1:0]    rdata;

    // ---- modports ----
    modport master (
        import wmask_expand,
        import reset_master,
        output valid, addr, wen, wdata, wmask,
        input  ready, rvalid, rdata
    );

    modport slave (
        import  wmask_expand,
        input  valid, addr, wen, wdata, wmask,
        output ready, rvalid, rdata
    );

    modport all_input (
        input  valid, ready, rvalid, rdata, addr, wen, wdata, wmask
    );

    modport response (
        output rvalid, rdata
    );

    modport slave_output (
        output ready, rvalid, rdata
    );

    modport master_output (
        import reset_master,
        output valid, addr, wen, wdata, wmask
    );

    // ---- helpers ----
    function automatic logic [DATA_WIDTH-1:0]
    wmask_expand(input logic [(DATA_WIDTH/8)-1:0] wmask);
        logic [DATA_WIDTH-1:0] result;
        integer i;
        for (i = 0; i < DATA_WIDTH; i = i+1) result[i] = wmask[i/8];
        return result;
    endfunction

    /* verilator lint_off MULTIDRIVEN */
    task automatic reset_master();
        valid = 1'b0;
        addr  = '0;
        wen   = 1'b0;
        wdata = '0;
        wmask = '0;
    endtask
    /* verilator lint_on MULTIDRIVEN */


endinterface


interface i_membus #(
	parameter int DATA_WIDTH = ILEN,
	parameter int ADDR_WIDTH = XLEN
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

	modport all_input (
		input  valid,
		input  ready,
		input  rvalid,
		input  rdata,
		input  addr,
		input  wen,
		input  wdata,
		input  wmask
	);

	modport response (
		output rvalid,
		output rdata
	);

	modport slave_output (
		output ready,
		output rvalid,
		output rdata
	);

	modport master_output (
		output valid,
		output addr,
		output wen,
		output wdata,
		output wmask
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
