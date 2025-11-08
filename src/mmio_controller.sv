// SystemVerilog version of mmio_controller

import eei::*;

module mmio_controller (
    input  logic       clk,
    input  logic       rst,
    input  Addr        DBG_ADDR,
    Membus.slave       req_core,
    Membus.master      ram_membus,
    Membus.master      rom_membus,
    Membus.master      dbg_membus
);

    typedef enum logic [1:0] {
        UNKNOWN,
        RAM,
        ROM,
        DEBUG
    } Device;

    Membus req_saved();

    Device last_device;
    logic  is_requested;

    function automatic string device_to_string (Device device);
        case (device)
            RAM:   return "RAM";
            ROM:   return "ROM";
            DEBUG: return "DEBUG";
            default: return "UNKNOWN";
        endcase
    endfunction

    // ---- masterのリセット ----
    task automatic reset_all_device_masters ();
        ram_membus.reset_master();
        rom_membus.reset_master();
        dbg_membus.reset_master();
    endtask

    function automatic Device get_device (Addr addr);
        if (DBG_ADDR <= addr && addr <= DBG_ADDR + 7) return DEBUG;
        if (MMAP_ROM_BEGIN <= addr && addr <= MMAP_ROM_END) return ROM;
        if (addr >= MMAP_RAM_BEGIN) return RAM;
        return UNKNOWN;
    endfunction

    // req_core をソースに接続
    task automatic assign_device_master_from_core;
        case (get_device(req_core.addr))
            RAM: begin
                ram_membus.valid = req_core.valid;
                ram_membus.addr  = req_core.addr - MMAP_RAM_BEGIN;
                ram_membus.wen   = req_core.wen;
                ram_membus.wdata = req_core.wdata;
                ram_membus.wmask = req_core.wmask;
            end
            ROM: begin
                rom_membus.valid = req_core.valid;
                rom_membus.addr  = req_core.addr - MMAP_ROM_BEGIN;
                rom_membus.wen   = req_core.wen;
                rom_membus.wdata = req_core.wdata;
                rom_membus.wmask = req_core.wmask;
            end
            DEBUG: begin
                dbg_membus.valid = req_core.valid;
                dbg_membus.addr  = req_core.addr - DBG_ADDR;
                dbg_membus.wen   = req_core.wen;
                dbg_membus.wdata = req_core.wdata;
                dbg_membus.wmask = req_core.wmask;
            end
            default: ;
        endcase
        if (req_core.valid) begin
            $display("[MMIOC] CORE->%s valid=%b ready=%b addr=%h wen=%b",
                device_to_string(get_device(req_core.addr)),
                req_core.valid,
                req_core.ready,
                req_core.addr,
                req_core.wen
            );
        end
    endtask


    // req_saved をソースに接続
    task automatic assign_device_master_from_saved;
        case (get_device(req_saved.addr))
            RAM: begin
                ram_membus.valid = req_saved.valid;
                ram_membus.addr  = req_saved.addr - MMAP_RAM_BEGIN;
                ram_membus.wen   = req_saved.wen;
                ram_membus.wdata = req_saved.wdata;
                ram_membus.wmask = req_saved.wmask;
            end
            ROM: begin
                rom_membus.valid = req_saved.valid;
                rom_membus.addr  = req_saved.addr - MMAP_ROM_BEGIN;
                rom_membus.wen   = req_saved.wen;
                rom_membus.wdata = req_saved.wdata;
                rom_membus.wmask = req_saved.wmask;
            end
            DEBUG: begin
                dbg_membus.valid = req_saved.valid;
                dbg_membus.addr  = req_saved.addr - DBG_ADDR;
                dbg_membus.wen   = req_saved.wen;
                dbg_membus.wdata = req_saved.wdata;
                dbg_membus.wmask = req_saved.wmask;
            end
            default: ;
        endcase
        if (req_saved.valid) begin
            $display("[MMIOC] SAVED->%s valid=%b addr=%h wen=%b",
                device_to_string(get_device(req_saved.addr)),
                req_saved.valid,
                req_saved.addr,
                req_saved.wen
            );
        end
    endtask



    // デバイス→req_core 応答接続
    task automatic assign_device_slave(
        input Device device
    );
        case (device)
            RAM: begin
                req_core.rvalid = ram_membus.rvalid;
                req_core.rdata  = ram_membus.rdata;
                req_core.ready   = ram_membus.ready;
            end
            ROM: begin
                req_core.rvalid = rom_membus.rvalid;
                req_core.rdata  = rom_membus.rdata;
                req_core.ready   = rom_membus.ready;
            end
            DEBUG: begin
                req_core.rvalid = dbg_membus.rvalid;
                req_core.rdata  = dbg_membus.rdata;
                req_core.ready  = dbg_membus.ready;
            end
            default: begin
                req_core.rvalid = 1'b0;
                req_core.rdata  = '0;
            end
        endcase
        $display("[MMIOC] RESP_FROM %s rvalid=%b ready=%b rdata=%h",
            device_to_string(device),
            req_core.rvalid,
            req_core.ready,
            req_core.rdata
        );
    endtask


    function automatic logic get_device_ready (Device device);
        case (device)
            RAM:    return ram_membus.ready;
            ROM:    return rom_membus.ready;
            DEBUG:  return dbg_membus.ready;
            default:return 1'b0;   // 方針で 1'b1 にしても可
        endcase
    endfunction

    function automatic logic get_device_rvalid (Device device);
        case (device)
            RAM:    return ram_membus.rvalid;
            ROM:    return rom_membus.rvalid;
            DEBUG:  return dbg_membus.rvalid;
            default:return 1'b0;
        endcase
    endfunction

    // ---- comb: req_core への応答面制御
    always_comb begin
        req_core.ready  = 1'b0;
        req_core.rvalid = 1'b0;
        req_core.rdata  = '0;

        if (req_saved.valid) begin
            if (is_requested) begin
                assign_device_slave(last_device);
                req_core.ready = get_device_rvalid(last_device);
            end
        end else begin
            req_core.ready = 1'b1;
        end
    end

    // ---- comb: デバイスへの要求面配線
    always_comb begin
        reset_all_device_masters();
        if (req_saved.valid) begin
            if (is_requested) begin
                if (get_device_rvalid(last_device)) begin
                    if (req_core.ready && req_core.valid)
                        assign_device_master_from_core();
                end
            end else begin
                assign_device_master_from_saved();
            end
        end else begin
            if (req_core.ready && req_core.valid)
                assign_device_master_from_core();
        end
    end

    // ---- seq: リクエスト受け入れ・状態遷移
    task automatic accept_request ();
        logic handshake;
        handshake = req_core.ready && req_core.valid;
        $display("[MMIOC] ACCEPT_ATTEMPT ready=%b valid=%b handshake=%b addr=%h",
            req_core.ready,
            req_core.valid,
            handshake,
            req_core.addr
        );
        req_saved.valid = handshake;
        if (handshake) begin
            last_device    = get_device(req_core.addr);
            is_requested   = get_device_ready(last_device);
            req_saved.addr  = req_core.addr;
            req_saved.wen   = req_core.wen;
            req_saved.wdata = req_core.wdata;
            req_saved.wmask = req_core.wmask;
            $display("[MMIOC] ACCEPT addr=%h device=%s is_req=%b dev_ready=%b dev_rvalid=%b",
                req_core.addr,
                device_to_string(last_device),
                is_requested,
                get_device_ready(last_device),
                get_device_rvalid(last_device)
            );
        end
    endtask

    task automatic on_clock ();
        $display("[MMIOC] ON_CLOCK saved_v=%b is_req=%b req_ready=%b req_valid=%b",
            req_saved.valid,
            is_requested,
            req_core.ready,
            req_core.valid
        );
        if (req_saved.valid) begin
            if (is_requested) begin
                if (get_device_rvalid(last_device))
                    accept_request();
                else begin
                    $display("[MMIOC] WAIT_RVALID device=%s dev_rvalid=%b",
                        device_to_string(last_device),
                        get_device_rvalid(last_device)
                    );
                end
            end else begin
                is_requested = get_device_ready(last_device);
                $display("[MMIOC] PROBE_READY device=%s dev_ready=%b",
                    device_to_string(last_device),
                    get_device_ready(last_device)
                );
            end
        end else begin
            $display("[MMIOC] CALL_ACCEPT_FROM_EMPTY");
            accept_request();
        end
    endtask

    task automatic on_reset ();
        last_device   = UNKNOWN;
        is_requested  = 1'b0;
        req_saved.reset_master(); // ← 名称統一
    endtask

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) on_reset();
        else     on_clock();
    end

    always_ff @(posedge clk) begin
        $display("[MMIOC] STATE saved_v=%b saved_addr=%h last=%s is_req=%b core_v=%b core_rdy=%b core_rvalid=%b core_addr=%h",
            req_saved.valid,
            req_saved.addr,
            device_to_string(last_device),
            is_requested,
            req_core.valid,
            req_core.ready,
            req_core.rvalid,
            req_core.addr
        );
    end

endmodule
