import eei::*;

// 1サイクル分のリクエストを保持するレジスタ
typedef struct packed {
    logic                           valid;
    logic [XLEN-1:0]                addr;
    logic                           wen;
    logic [MEMBUS_DATA_WIDTH-1:0]   wdata;
    logic [(MEMBUS_DATA_WIDTH/8)-1:0] wmask;
} MembusReg;

module mmio_controller (
    input   logic clk,
    input   logic rst,
    input   Addr  DBG_ADDR,
    Membus.slave  req_core,
    Membus.master ram_membus,
    Membus.master rom_membus,
    Membus.master dbg_membus
);

    typedef enum logic [1:0] {
        UNKNOWN,
        RAM,
        ROM,
        DEBUG
    } Device;

    // outstanding リクエスト保持
    MembusReg   req_saved;
    Device      last_device;
    logic       is_requested;  // デバイス側が ready になったかのラッチ

    // ---------- ユーティリティ ----------
    function void reset_membus_master (
        output logic                           valid,
        output logic [XLEN-1:0]                addr,
        output logic                           wen,
        output logic [MEMBUS_DATA_WIDTH-1:0]   wdata,
        output logic [(MEMBUS_DATA_WIDTH/8)-1:0] wmask
    );
        valid = 1'b0;
        addr  = '0;
        wen   = 1'b0;
        wdata = '0;
        wmask = '0;
    endfunction

    function void reset_all_device_masters ();
        reset_membus_master(ram_membus.valid, ram_membus.addr, ram_membus.wen, ram_membus.wdata, ram_membus.wmask);
        reset_membus_master(rom_membus.valid, rom_membus.addr, rom_membus.wen, rom_membus.wdata, rom_membus.wmask);
        reset_membus_master(dbg_membus.valid, dbg_membus.addr, dbg_membus.wen, dbg_membus.wdata, dbg_membus.wmask);
    endfunction

    function Device get_device (input Addr addr);
        if (DBG_ADDR <= addr && addr <= DBG_ADDR +7) return DEBUG;
        if ((MMAP_ROM_BEGIN <= addr) && (addr <= MMAP_ROM_END)) return ROM;
        if (addr >= MMAP_RAM_BEGIN) return RAM;
        return UNKNOWN;
    endfunction

    function void drive_device_master (
        input  logic                           valid,
        input  logic [XLEN-1:0]                addr,
        input  logic                           wen,
        input  logic [MEMBUS_DATA_WIDTH-1:0]   wdata,
        input  logic [(MEMBUS_DATA_WIDTH/8)-1:0] wmask
    );
        unique case (get_device(addr))
            RAM: begin
                ram_membus.valid = valid;
                ram_membus.wen   = wen;
                ram_membus.wdata = wdata;
                ram_membus.wmask = wmask;
                ram_membus.addr  = addr - MMAP_RAM_BEGIN;
            end
            ROM: begin
                rom_membus.valid = valid;
                rom_membus.wen   = wen;
                rom_membus.wdata = wdata;
                rom_membus.wmask = wmask;
                rom_membus.addr  = addr - MMAP_ROM_BEGIN;
            end
            DEBUG: begin
                dbg_membus.valid = valid;
                dbg_membus.wen   = wen;
                dbg_membus.wdata = wdata;
                dbg_membus.wmask = wmask;
                dbg_membus.addr  = addr - DBG_ADDR;
            end
            default: ; // UNKNOWN は捨てる
        endcase
    endfunction

    function logic get_device_ready (input Device d);
        unique case (d)
            RAM: return ram_membus.ready;
            ROM: return rom_membus.ready;
            DEBUG: return dbg_membus.ready;
            default: return 1'b0;
        endcase
    endfunction

    function logic get_device_rvalid (input Device d);
        unique case (d)
            RAM: return ram_membus.rvalid;
            ROM: return rom_membus.rvalid;
            DEBUG: return dbg_membus.rvalid;
            default: return 1'b0;
        endcase
    endfunction

    function void readback_device (
        input  Device                         d,
        output logic                          rvalid,
        output logic [MEMBUS_DATA_WIDTH-1:0]  rdata
    );
        rvalid = 1'b0;
        rdata  = '0;
        unique case (d)
            RAM: begin
                rvalid = ram_membus.rvalid;
                rdata  = ram_membus.rdata;
            end
            ROM: begin
                rvalid = rom_membus.rvalid;
                rdata  = rom_membus.rdata;
            end
            DEBUG: begin
                rvalid = dbg_membus.rvalid;
                rdata  = dbg_membus.rdata;
            end
            default: ; // UNKNOWN
        endcase
    endfunction

    // ---------- combinational: master配線 & コアへの応答 ----------
    always_comb begin
        // 1) まず全デバイス出力をクリア
        reset_all_device_masters();

        // 2) outstanding があればそれをドライブ
        if (req_saved.valid) begin
            drive_device_master(
                req_saved.valid,
                req_saved.addr,
                req_saved.wen,
                req_saved.wdata,
                req_saved.wmask
            );
        end

        // 3) コアへの応答
        req_core.rvalid = 1'b0;
        req_core.rdata  = '0;

        if (req_saved.valid) begin
            readback_device(last_device, req_core.rvalid, req_core.rdata);
        end

        // 4) ready: outstanding が無い時だけ 1
        //    （単発リクエスト＝1件滞留方式）
        req_core.ready = (req_saved.valid == 1'b0);
    end

    // ---------- sequential: ラッチ/クリア ----------
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            req_saved    <= '{default:'0};
            last_device  <= UNKNOWN;
            is_requested <= 1'b0;
        end else begin
            // デバイス応答を受け取ったら次サイクルで outstanding をクリア
            if (req_saved.valid && get_device_rvalid(last_device)) begin
                req_saved.valid <= 1'b0;
            end

            // 新規リクエストの取り込み（保留なし かつ コアが valid なら）
            if (!req_saved.valid && req_core.valid && req_core.ready) begin
                req_saved.valid <= 1'b1;
                req_saved.addr  <= req_core.addr;
                req_saved.wen   <= req_core.wen;
                req_saved.wdata <= req_core.wdata;
                req_saved.wmask <= req_core.wmask;

                last_device     <= get_device(req_core.addr);
                is_requested    <= get_device_ready(get_device(req_core.addr));
            end
        end
    end

endmodule
