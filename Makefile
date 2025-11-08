# ===============================================
# Makefile for SystemVerilog + Verilator project
# ===============================================

PROJECT     = core
TOP_MODULE  = core_top
TB_PROGRAM  = src/tb_verilator.cpp

# ツール
VERILATOR = verilator

# Restrict environments may lack a working xargs, provide our shim.
export PATH := $(abspath tools):$(PATH)

# ディレクトリ
SRC_DIR   = src
OBJ_DIR   = obj_dir

# トップモジュール名
TOP       = core_top

# テストベンチ (C++)
TB        = $(SRC_DIR)/tb_verilator.cpp

# ソースリスト
FILELIST  = core.f

# 実行バイナリ名
SIM       = $(OBJ_DIR)/sim
SIM_NAME = sim

# ラン用パラメータ
ROM ?= src/test/sample_ecall.hex
RAM ?= $(ROM)
CYCLES ?= 20

# =====================================================
# ルール
# =====================================================

.PHONY: all build run clean


sim_o:
		verilator --cc $(VERILATOR_FLAGS) -f $(FILELIST) --exe $(TB_PROGRAM) --top-module $(TOP_MODULE) --Mdir $(OBJ_DIR)
		make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk
		mv $(OBJ_DIR)/V$(TOP_MODULE) $(OBJ_DIR)/$(SIM_NAME)

# 1️⃣ VerilatorでC++シミュレータを生成
build_o:
	$(VERILATOR) --cc -f $(FILELIST) --exe $(TB) --top-module $(TOP) --Mdir $(OBJ_DIR)
	make -C $(OBJ_DIR) -f V$(TOP).mk
	mv $(OBJ_DIR)/V$(TOP) $(OBJ_DIR)/$(SIM_NAME)
	@echo "✅ Build complete. Run simulation with: make run"

# 2️⃣ シミュレーション実行
run:
	$(SIM) $(ROM) $(RAM) $(CYCLES)

# 3️⃣ クリーンアップ
clean:
	rm -rf $(OBJ_DIR)
sim:
	verilator --cc $(VERILATOR_FLAGS) -f $(FILELIST) --exe $(TB_PROGRAM) --top-module $(TOP_MODULE) --Mdir $(OBJ_DIR)
	make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk
	mv $(OBJ_DIR)/V$(TOP_MODULE) $(OBJ_DIR)/$(SIM_NAME)

build:
	$(VERILATOR) --cc -f $(FILELIST) --exe $(TB) --top-module $(TOP) --Mdir $(OBJ_DIR)
	make -C $(OBJ_DIR) -f V$(TOP).mk
	mv $(OBJ_DIR)/V$(TOP) $(OBJ_DIR)/$(SIM_NAME)
	@echo "✅ Build complete. Run simulation with: make run"
	@echo "🧹 Cleaned build files."
