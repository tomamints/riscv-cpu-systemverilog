# DMA ドキュメント

## 目的

本DMAは、RISC-Vコアがメモリ転送（コピー／初期化）に費やす命令実行を削減し、
CPUを制御・計算に集中させることで、Edge / IoT用途における電力効率および処理レイテンシを改善することを目的とする。

本DMAは、ソフトウェアから **MMIO（Memory Mapped IO）レジスタ** を介して設定・開始・状態確認ができることを必須要件とする。

本DMAは、既存の `mmio_controller` が提供する
「アドレスデコードによるデバイス選択」方式に従い、**新規のMMIOデバイス**として追加される。

---

## Interface list

### MMIO Bus Interface（Membus slave）

**in**
- valid
- addr
- wen
- wdata
- wmask

**out**
- ready
- rvalid
- rdata

---

### Interrupt（optional / 将来拡張）

**out**
- irq
  - STATUS.done == 1 のときアサート
  - CTRL.clear_done によりデアサート

---

### Clock / Reset

**in**
- clk
- rst

> NOTE
> Step1では実際のメモリ転送（DMAがメモリバスの master になる処理）は必須としない。
> 本フェーズでは **制御レジスタおよび状態遷移（FSM）** の完成を優先する。
> 実転送は Step1.5 以降で拡張する。

---

## Address map（MMIO registers）

    // DMA (MMIO registers)
    localparam Addr MMAP_DMA_BEGIN  = Addr'('h300_0000);
    localparam Addr MMAP_DMA_CTRL   = Addr'('h00);  // start, clear_done, irq_en
    localparam Addr MMAP_DMA_SRC    = Addr'('h04);
    localparam Addr MMAP_DMA_DST    = Addr'('h08);
    localparam Addr MMAP_DMA_LEN    = Addr'('h0C);
    localparam Addr MMAP_DMA_STATUS = Addr'('h10);  // busy, done, err(optional)
    localparam Addr MMAP_DMA_END    = MMAP_DMA_BEGIN + Addr'('h0FFF);

- DMAのMMIOレジスタ空間は MMAP_DMA_BEGIN から MMAP_DMA_END を使用する
- mmio_controller では DMA領域アクセス時に
  addr - MMAP_DMA_BEGIN を DMA デバイスへ渡す

---

## Register specification

### CTRL Register（offset: 0x00 / RW）

| Bit | Name       | Access | Description |
|----:|------------|--------|-------------|
| 0   | start      | W      | 1を書き込むことでDMA転送を開始する |
| 1   | clear_done | W      | STATUS.done を0にクリア（self-clear） |
| 2   | irq_en     | RW     | done時にirqを出力（optional） |
| 31:3 | -         | -      | 未使用（0を返す） |

- busy == 1 の間に start が書き込まれた場合は **無視（No-op）**
- clear_done は書き込み後、自動的に 0 に戻る

---

### SRC Register（offset: 0x04 / RW）

- 転送元アドレスを保持するレジスタ
- Step1では値を保持できることのみを要件とする

---

### DST Register（offset: 0x08 / RW）

- 転送先アドレスを保持するレジスタ
- Step1では値を保持できることのみを要件とする

---

### LEN Register（offset: 0x0C / RW）

- 転送サイズを指定するレジスタ
- 単位は実装依存（例：MEMBUS_DATA_WIDTH 単位）
- Step1では **状態遷移用カウンタとして消費できること** を要件とする

---

### STATUS Register（offset: 0x10 / RO）

| Bit | Name | Description |
|----:|------|-------------|
| 0   | busy | 転送中は1 |
| 1   | done | 転送完了で1 |
| 2   | err  | エラー表示（optional） |
| 31:3 | -   | 未使用（0を返す） |

- done は CTRL.clear_done により 0 に戻る

---

## Functional requirements（機能要件）

- DMAは MMIO レジスタ書き込みにより設定できること
- SRC / DST / LEN を保持できること
- CTRL.start が 1 に書き込まれると転送シーケンスを開始する
- 転送中は STATUS.busy == 1 とする
- 転送完了時に STATUS.done == 1 とする
- CTRL.clear_done により STATUS.done をクリアできること
- busy == 1 の間の SRC / DST / LEN 書き換えは **無視** する

---

## State machine specification（状態遷移）

### States

- **IDLE**
  - busy = 0
  - done = 0

- **BUSY**
  - busy = 1

- **DONE**
  - busy = 0
  - done = 1

---

### Transitions

- IDLE → BUSY
  - 条件：CTRL.start == 1

- BUSY → DONE
  - 条件：内部カウンタ完了（Step1では LEN 消費完了）

- DONE → IDLE
  - 条件：CTRL.clear_done == 1

---

## Notes（設計方針）

- Step1のゴールは **MMIO制御レジスタ＋FSMの完成**
- 実メモリ転送、バス仲裁、複数チャネル対応は Step1.5 以降で拡張
- 本DMAは「CPUを制御に専念させる」ための周辺IPとして設計する

