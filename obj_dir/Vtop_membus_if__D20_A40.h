// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMBUS_IF__D20_A40_H_
#define VERILATED_VTOP_MEMBUS_IF__D20_A40_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_membus_if__D20_A40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ready;
    CData/*0:0*/ rvalid;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_membus_if__D20_A40(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_membus_if__D20_A40();
    VL_UNCOPYABLE(Vtop_membus_if__D20_A40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_membus_if__D20_A40* obj);

#endif  // guard
