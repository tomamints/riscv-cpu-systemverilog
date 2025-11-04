import eei::*;

module mmio_controller (
    input  logic         clk,
    input  logic         rst,
    membus_if.slave      req_core
);

    typedef enum logic [0:0] {
        DEVICE_UNKNOWN = 1'b0
    } device_t;

    membus_if req_saved();  // インターフェース instance（内部レジスタ代わり）
    device_t last_device;
    logic    is_requested;

    // メンバス master をリセット
    task reset_membus_master (
        ref membus_if.master_output master
    );
        master.valid = 1'b0;
        master.addr  = '0;
        master.wen   = 1'b0;
        master.wdata = '0;
        master.wmask = '0;
    endtask

    // デバイス側 master 全部をリセット（とりあえず空）
    task reset_all_device_masters();
    endtask

    // アドレス → デバイス判定
    function device_t get_device(input Addr addr);
        return DEVICE_UNKNOWN;
    endfunction

    // req 情報をデバイス master へ割り当てる
    task assign_device_master (
        membus_if.all_input req
    );
    endtask

    // デバイス応答を req_core に返す
    task assign_device_slave (
        input device_t device,
        ref   membus_if.response req
    );
        req.rvalid = 1'b1;
        req.rdata  = '0;
    endtask

    function logic get_device_ready(input device_t device);
        return 1'b1;
    endfunction

    function logic get_device_rvalid(input device_t device);
        return 1'b1;
    endfunction

    // req_core 出力
    always_comb begin
        req_core.ready  = 1'b0;
        req_core.rvalid = 1'b0;
        req_core.rdata  = '0;

        if (req_saved.valid) begin
            if (is_requested) begin
                assign_device_slave(last_device, req_core);
                req_core.ready = get_device_rvalid(last_device);
            end
        end else begin
            req_core.ready = 1'b1;
        end
    end

    // デバイス master への割り当て
    always_comb begin
        reset_all_device_masters();

        if (req_saved.valid) begin
            if (is_requested) begin
                if (get_device_rvalid(last_device)) begin
                    if (req_core.ready && req_core.valid)
                        assign_device_master(req_core);
                end
            end else begin
                assign_device_master(req_saved);
            end
        end else begin
            if (req_core.ready && req_core.valid)
                assign_device_master(req_core);
        end
    end

    // 新規要求受付
    task accept_request();
        req_saved.valid = req_core.ready && req_core.valid;
        if (req_core.ready && req_core.valid) begin
            last_device  = get_device(req_core.addr);
            is_requested = get_device_ready(last_device);

            req_saved.addr  = req_core.addr;
            req_saved.wen   = req_core.wen;
            req_saved.wdata = req_core.wdata;
            req_saved.wmask = req_core.wmask;
        end
    endtask

    task on_clock();
        if (req_saved.valid) begin
            if (is_requested) begin
                if (get_device_rvalid(last_device))
                    accept_request();
            end else begin
                is_requested = get_device_ready(last_device);
            end
        end else begin
            accept_request();
        end
    endtask

    task on_reset();
        last_device  = DEVICE_UNKNOWN;
        is_requested = 1'b0;
        reset_membus_master(req_saved.master_output);
    endtask

    always_ff @(posedge clk or negedge rst) begin
        if (!rst)
            on_reset();
        else
            on_clock();
    end

endmodule
