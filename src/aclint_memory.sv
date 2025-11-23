import eei::*;

module aclint_memory (
    input logic clk,
    input logic rst,
    Membus.slave membus,
    aclint_if.master aclint
    );

    logic msip0;

    always_comb begin
        aclint.msip = msip0;
    end

    assign membus.ready = 1;

    Addr addr;
    logic[MEMBUS_DATA_WIDTH-1 : 0] M;
    logic[MEMBUS_DATA_WIDTH-1 : 0] D;

    always_ff @(posedge clk or negedge rst)begin
        if(!rst)begin
            membus.rvalid <= 0;
            membus.rdata  <= 0;
            msip0         <= 0;
        end else begin
            membus.rvalid <= membus.valid;
            if (membus.valid) begin
                addr = {membus.addr[XLEN-1 : 3], 3'b0};
                if (membus.wen) begin
                    M = membus.wmask_expand(membus.wmask);
                    D = membus.wdata & M;
                    case(addr)
                        MMAP_ACLINT_MSIP : msip0 <= D[0] | (msip0 & ~M[0]);
                        default: ;
                    endcase
                end else begin
                    case(addr)
                    MMAP_ACLINT_MSIP : membus.rdata <= {63'b0, msip0};
                    default          : membus.rdata <= '0;
                    endcase
                end
            end
        end
    end

endmodule
