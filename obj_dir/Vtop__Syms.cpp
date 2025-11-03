// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_svutil.h"
#include "Vtop___024unit.h"
#include "Vtop_membus_if__D40_A10.h"
#include "Vtop_membus_if__D20_A40.h"
#include "Vtop_membus_if__D40_A40.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__svutil{this, Verilated::catName(namep, "svutil")}
    , TOP__top__DOT__d_membus{this, Verilated::catName(namep, "top.d_membus")}
    , TOP__top__DOT__i_membus{this, Verilated::catName(namep, "top.i_membus")}
    , TOP__top__DOT__membus{this, Verilated::catName(namep, "top.membus")}
{
        // Check resources
        Verilated::stackCheck(1088);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__svutil = &TOP__svutil;
    TOP.__PVT__top__DOT__d_membus = &TOP__top__DOT__d_membus;
    TOP.__PVT__top__DOT__i_membus = &TOP__top__DOT__i_membus;
    TOP.__PVT__top__DOT__membus = &TOP__top__DOT__membus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__svutil.__Vconfigure(true);
    TOP__top__DOT__d_membus.__Vconfigure(true);
    TOP__top__DOT__i_membus.__Vconfigure(true);
    TOP__top__DOT__membus.__Vconfigure(true);
    // Setup scopes
    __Vscope_svutil.configure(this, name(), "svutil", "svutil", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top.configure(this, name(), "top", "top", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__c__csru.configure(this, name(), "top.c.csru", "csru", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__unnamedblk1.configure(this, name(), "top.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
