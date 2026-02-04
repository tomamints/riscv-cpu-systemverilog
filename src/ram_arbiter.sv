import eei::*;

//CPU優先の2→1RAM arbiter（方針A: writeはreadyで完了）
// - 1 outstanding read のみ保持
// - out への要求は、選ばれたmasterの信号をそのまま流す
// - ready は out.ready を選ばれたmasterに返す（ただしread outstanding中は新規を止める）

module ram_arbiter_cpu_prio #(
    parameter int XLEN = 64
)(
    input logic clk,
    input logic rst,

    Membus.slave cpu,
    Membus.slave dma,
    Membus.master out
);

    typedef enum logic[1:0]{
        A_IDLE,
        A_READ_WAIT
    } astate_t;

    astate_t astate;
    //outstanding readの返却先
    logic last_is_cpu;

    //どちらを選ぶか（CPU優先）
    wire grant_cpu = cpu.valid;
    wire grant_dma = !cpu.valid && dma.valid;

    //convenience
    wire any_valid = cpu.valid | dma.valid;

    //combinational: outへの駆動
    always_comb begin
        out.valid = 1'b0;
        out.addr  = '0;
        out.wen   = 1'b0;
        out.wdata = '0;
        out.wmask = '0;

        //default:masters not ready, no rvalid
        cpu.ready = 1'b0;
        cpu.rvalid = 1'b0;
        cpu.rdata = '0;

        dma.ready = 1'b0;
        dma.rvalid = 1'b0;
        dma.rdata = '0;

        //read応答は　outstanding の返却先にだけ返す
        if(astate == A_READ_WAIT)begin
            if(out.rvalid)begin
                if(last_is_cpu)begin
                    cpu.rvalid = 1'b1;
                    cpu.rdata  = out.rdata;
                end else begin
                    dma.rvalid = 1'b1;
                    dma.rdata = out.rdata;
                end
            end
        end

        //新規要求の発行（read outstanding中は止める）
        if(astate == A_IDLE) begin
            if(any_valid) begin
                out.valid = 1'b1;

                if(grant_cpu)begin
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

    //sequential: outstanding 管理

    wire out_fire = out.valid && out.ready;

    always_ff @(posedge clk or negedge rst)begin
        if (!rst) begin
            astate <= A_IDLE;
            last_is_cpu <= 1'b1;
        end else begin
            unique case (astate)
                A_IDLE: begin
                    if(out_fire)begin
                        //この要求がreadならoutstandingにする
                        if(!out.wen)begin
                            astate<=A_READ_WAIT;
                            last_is_cpu <= grant_cpu; //このサイクルの選択先
                        end
                        //writeはreadyで完了なので、stateはIDLEのまま
                    end
                end

                A_READ_WAIT: begin
                    if(out.rvalid)begin
                        astate <= A_IDLE;
                    end
                end

                default: astate <= A_IDLE;
            endcase
        end
    end
endmodule
