# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtop \
  Vtop___024root__DepSet_h4b98a05d__0 \
  Vtop___024root__DepSet_h6944321b__0 \
  Vtop_svutil__DepSet_h91f60104__0 \
  Vtop_membus_if__D40_A10__DepSet_ha7479079__0 \
  Vtop_membus_if__D20_A40__DepSet_h2f84c6ac__0 \
  Vtop_membus_if__D40_A40__DepSet_hf8d6cd09__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtop__ConstPool_0 \
  Vtop___024root__Slow \
  Vtop___024root__DepSet_h4b98a05d__0__Slow \
  Vtop___024root__DepSet_h6944321b__0__Slow \
  Vtop_svutil__Slow \
  Vtop_svutil__DepSet_ha2ea92e4__0__Slow \
  Vtop___024unit__Slow \
  Vtop___024unit__DepSet_h1e8fffb9__0__Slow \
  Vtop_membus_if__D40_A10__Slow \
  Vtop_membus_if__D40_A10__DepSet_ha7479079__0__Slow \
  Vtop_membus_if__D20_A40__Slow \
  Vtop_membus_if__D20_A40__DepSet_h2f84c6ac__0__Slow \
  Vtop_membus_if__D40_A40__Slow \
  Vtop_membus_if__D40_A40__DepSet_hf8d6cd09__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtop__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtop__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
