// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_membus_if__D40_A10.h"

void Vtop_membus_if__D40_A10___ctor_var_reset(Vtop_membus_if__D40_A10* vlSelf);

Vtop_membus_if__D40_A10::Vtop_membus_if__D40_A10(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_membus_if__D40_A10___ctor_var_reset(this);
}

void Vtop_membus_if__D40_A10::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_membus_if__D40_A10::~Vtop_membus_if__D40_A10() {
}
