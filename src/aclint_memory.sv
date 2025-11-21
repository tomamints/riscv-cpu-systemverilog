import eei::*;

module aclint_memory (
    input logic clk,
    input logic rst,
    Membus.slave membus,
    aclint_if.master aclint
    );

    assign membus.ready = 1;
    always_ff @(posedge clk or negedge rst)begin
        if(!rst)begin
            membus.rvalid <= 0;
            membus.rdata <= 0;
        end else begin
            membus.rvalid <= membus.valid;
        end
    end

endmodule
