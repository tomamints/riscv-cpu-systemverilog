## 教材対応・実装ロードマップ

本プロジェクトは、kanataso氏による学習教材
**「Verylで作るCPU」** https://cpu.kanataso.net/
を参考にしながら段階的に実装を進めています。

以下は、教材の章構成と本リポジトリでの実装状況の対応表です。


| 教材章 / トピック | 内容 | 実装状況 |
|------------------|------|---------|
| はじめに / CPU概要 | CPUの全体構成、設計方針 | ✅ |
| RV32I / RV64I | ベース命令セット | ✅ |
| デコード・実行パイプライン | 命令デコード、ALU、制御 | ✅ |
| レジスタファイル | 汎用レジスタ管理 | ✅ |
| Load / Store | メモリアクセス | ✅ |
| MMIO | メモリマップドI/O | ✅ |
| CSR | Control and Status Registers | ✅ |
| 例外処理 | Trap / Exception | WIP |
| 特権仕様 | Privileged Spec | 部分対応 |
| 割り込み | External / Timer / Software Interrupt | WIP |
| Linux起動対応 | MMU / 仮想記憶 / SoC統合 | 予定 |

※ 実装はRISC-V仕様書と教材を突き合わせながら段階的に拡張しています。
