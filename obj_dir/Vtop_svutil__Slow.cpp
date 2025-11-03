// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_svutil.h"

void Vtop_svutil___ctor_var_reset(Vtop_svutil* vlSelf);

Vtop_svutil::Vtop_svutil(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_svutil___ctor_var_reset(this);
}

void Vtop_svutil::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_svutil::~Vtop_svutil() {
}
