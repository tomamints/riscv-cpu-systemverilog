module membus_arbiter_cpu_prio #(
    parameter int DATA_WIDTH = MEMBUS_DATA_WIDTH,
    parameter int ADDR_WIDTH = XLEN
)(
    input  logic clk,
    input  logic rst,

    // 上流（要求元）: どちらも master
    Membus.master cpu,
    Membus.master dma,

    // 下流（接続先）: master として要求を出す
    Membus.master out
);

    logic last_is_cpu;

    wire grant_cpu = cpu.valid;
    wire grant_dma = !cpu.valid && dma.valid;

    // outへ出す信号選択（CPU優先）
    always_comb begin
        // デフォルト
        out.valid = cpu.valid | dma.valid;

        if (grant_cpu) begin
            out.addr  = cpu.addr;
            out.wen   = cpu.wen;
            out.wdata = cpu.wdata;
            out.wmask = cpu.wmask;
        end else begin
            out.addr  = dma.addr;
            out.wen   = dma.wen;
            out.wdata = dma.wdata;
            out.wmask = dma.wmask;
        end

        // ready は grant した側にだけ返す
        cpu.ready = out.ready && grant_cpu;
        dma.ready = out.ready && grant_dma;

        // rdata は共通（どちらでも同じ out.rdata を見る）
        cpu.rdata = out.rdata;
        dma.rdata = out.rdata;

        // rvalid は last_is_cpu で振り分け
        cpu.rvalid = out.rvalid &&  last_is_cpu;
        dma.rvalid = out.rvalid && !last_is_cpu;
    end

    // 応答先の記録（要求が受理された瞬間に更新）
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            last_is_cpu <= 1'b1;
        end else if (out.valid && out.ready) begin
            last_is_cpu <= grant_cpu; // CPUを通したなら1
        end
    end

endmodule
