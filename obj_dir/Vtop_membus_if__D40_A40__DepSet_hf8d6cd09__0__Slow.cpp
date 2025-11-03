// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_membus_if__D40_A40.h"

VL_ATTR_COLD void Vtop_membus_if__D40_A40___ctor_var_reset(Vtop_membus_if__D40_A40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_membus_if__D40_A40___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
}
