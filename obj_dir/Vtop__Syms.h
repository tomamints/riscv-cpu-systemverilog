// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_svutil.h"
#include "Vtop___024unit.h"
#include "Vtop_membus_if__D40_A10.h"
#include "Vtop_membus_if__D20_A40.h"
#include "Vtop_membus_if__D40_A40.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_svutil                    TOP__svutil;
    Vtop_membus_if__D40_A40        TOP__top__DOT__d_membus;
    Vtop_membus_if__D20_A40        TOP__top__DOT__i_membus;
    Vtop_membus_if__D40_A10        TOP__top__DOT__membus;

    // SCOPE NAMES
    VerilatedScope __Vscope_svutil;
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__c__csru;
    VerilatedScope __Vscope_top__unnamedblk1;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
