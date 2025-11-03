// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_svutil.h"

extern "C" const char* get_env_value(const char* key);

VL_INLINE_OPT void Vtop_svutil____Vdpiimwrap_get_env_value_TOP__svutil(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string key, std::string &get_env_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_svutil____Vdpiimwrap_get_env_value_TOP__svutil\n"); );
    // Body
    const char* key__Vcvt;
    key__Vcvt = key.c_str();
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    const char* get_env_value__Vfuncrtn__Vcvt;
    get_env_value__Vfuncrtn__Vcvt = get_env_value(key__Vcvt);
    get_env_value__Vfuncrtn = VL_CVT_N_CSTR(get_env_value__Vfuncrtn__Vcvt);
}
