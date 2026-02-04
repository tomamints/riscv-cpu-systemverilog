module ram_arbiter_cpu_prio (
    input logic clk,
    input logic rst,
    Membus.slave  cpu,
    Membus.slave  dma,
    Membus.master out
);

    typedef enum logic [1:0] { A_IDLE, A_WAIT } astate_t;
    astate_t astate;

    logic last_is_cpu;

    wire grant_cpu = cpu.valid;
    wire grant_dma = !cpu.valid && dma.valid;
    wire any_valid = cpu.valid | dma.valid;

    wire out_fire = out.valid && out.ready;

    always_comb begin
        // defaults
        out.valid = 1'b0;
        out.addr  = '0;
        out.wen   = 1'b0;
        out.wdata = '0;
        out.wmask = '0;

        cpu.ready  = 1'b0; cpu.rvalid = 1'b0; cpu.rdata = '0;
        dma.ready  = 1'b0; dma.rvalid = 1'b0; dma.rdata = '0;

        // 応答は WAIT中だけ返す（read/write共通）
        if (astate == A_WAIT) begin
            if (out.rvalid) begin
                if (last_is_cpu) begin
                    cpu.rvalid = 1'b1;
                    cpu.rdata  = out.rdata;
                end else begin
                    dma.rvalid = 1'b1;
                    dma.rdata  = out.rdata;
                end
            end
        end

        // 新規要求はIDLEのときだけ
        if (astate == A_IDLE) begin
            if (any_valid) begin
                out.valid = 1'b1;
                if (grant_cpu) begin
                    out.addr  = cpu.addr;
                    out.wen   = cpu.wen;
                    out.wdata = cpu.wdata;
                    out.wmask = cpu.wmask;
                    cpu.ready = out.ready;
                end else begin
                    out.addr  = dma.addr;
                    out.wen   = dma.wen;
                    out.wdata = dma.wdata;
                    out.wmask = dma.wmask;
                    dma.ready = out.ready;
                end
            end
        end
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            astate <= A_IDLE;
            last_is_cpu <= 1'b1;
        end else begin
            unique case (astate)
                A_IDLE: begin
                    if (out_fire) begin
                        last_is_cpu <= grant_cpu;  // この要求の発行元を保持
                        astate <= A_WAIT; // ★ read/write問わず outstanding
                    end
                end
                A_WAIT: begin
                    if (out.rvalid) begin
                        astate <= A_IDLE;
                    end
                end
            endcase
        end
    end
endmodule
