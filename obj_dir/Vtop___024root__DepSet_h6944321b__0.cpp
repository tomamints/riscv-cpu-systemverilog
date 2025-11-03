// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h7ef2948f_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ top__DOT__c__DOT__alum__DOT__add;
    top__DOT__c__DOT__alum__DOT__add = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__Vfuncout;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__is_op32;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__is_op32 = 0;
    CData/*2:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__funct3;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__funct3 = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__value;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__value = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__Vfuncout;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__is_op32;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__is_op32 = 0;
    CData/*2:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__funct3;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__funct3 = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__value;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__value = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_0;
    __VdfgRegularize_h038a369a_0_0 = 0;
    // Body
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall = 
        (1U & ((~ ((2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)) 
                   | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_rvalided))) 
               & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                  >> 0xeU)));
    vlSelfRef.top__DOT__c__DOT__exs_rs1_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                     >> 7U)))
                                                 ? 0ULL
                                                 : 
                                                vlSelfRef.top__DOT__c__DOT__regfile
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                     >> 7U))]);
    vlSelfRef.top__DOT__c__DOT__exs_rs2_data = ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                     >> 0xcU)))
                                                 ? 0ULL
                                                 : 
                                                vlSelfRef.top__DOT__c__DOT__regfile
                                                [(0x1fU 
                                                  & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                     >> 0xcU))]);
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid = 
        ((IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid) 
         & ((~ ((IData)(vlSelfRef.top__DOT__c__DOT__exs_data_hazard) 
                | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_is_requested))) 
            & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
               >> 0xeU)));
    __VdfgRegularize_h038a369a_0_0 = (1U & (~ ((IData)(vlSelfRef.top__DOT__c__DOT__exs_data_hazard) 
                                               | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall))));
    if ((0x800000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x400000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x200000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x100000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x80000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[5U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.top__DOT__c__DOT__exq_rdata[4U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.top__DOT__c__DOT__exq_rdata[3U])) 
                                                         >> 0x18U)));
            vlSelfRef.top__DOT__c__DOT__exs_op2 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__exq_rdata[0U])));
        }
    } else if ((0x400000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x200000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x100000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x80000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[5U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.top__DOT__c__DOT__exq_rdata[4U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.top__DOT__c__DOT__exq_rdata[3U])) 
                                                         >> 0x18U)));
            vlSelfRef.top__DOT__c__DOT__exs_op2 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__exq_rdata[0U])));
        }
    } else if ((0x200000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x100000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x80000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = vlSelfRef.top__DOT__c__DOT__exs_rs1_data;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = vlSelfRef.top__DOT__c__DOT__exs_rs2_data;
        }
    } else if ((0x100000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x80000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = vlSelfRef.top__DOT__c__DOT__exs_rs1_data;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__exq_rdata[0U])));
        }
    } else if ((0x80000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_op1 = vlSelfRef.top__DOT__c__DOT__exs_rs1_data;
            vlSelfRef.top__DOT__c__DOT__exs_op2 = (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__exq_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__exq_rdata[0U])));
        }
    } else if ((0x40000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        vlSelfRef.top__DOT__c__DOT__exs_op1 = vlSelfRef.top__DOT__c__DOT__exs_rs1_data;
        vlSelfRef.top__DOT__c__DOT__exs_op2 = vlSelfRef.top__DOT__c__DOT__exs_rs2_data;
    } else {
        vlSelfRef.top__DOT__c__DOT__exs_op1 = 0ULL;
        vlSelfRef.top__DOT__c__DOT__exs_op2 = 0ULL;
    }
    vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid));
    vlSelfRef.top__DOT__c__DOT__memq_wvalid = ((IData)(__VdfgRegularize_h038a369a_0_0) 
                                               & (IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid));
    vlSelfRef.top__DOT__c__DOT__exq_rready = ((IData)(__VdfgRegularize_h038a369a_0_0) 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__memq_wready));
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__value 
        = vlSelfRef.top__DOT__c__DOT__exs_op1;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__funct3 
        = (7U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                 >> 7U));
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__is_op32 
        = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                 >> 0xdU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2919238243982740944ull);
    if (__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__is_op32) {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32 
            = (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__value);
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext 
            = ((1U & (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__funct3))
                ? (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32))
                : (((QData)((IData)((- (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32))));
    } else {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext 
            = __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__value;
    }
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__Vfuncout 
        = ((1U & (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__funct3))
            ? vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext
            : ((1U & (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext))
                : vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext));
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_dividend 
        = __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__Vfuncout;
    if ((0x2000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_overflow 
            = (((~ (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                    >> 7U)) & (0x80000000ULL == (0xffffffffULL 
                                                 & vlSelfRef.top__DOT__c__DOT__exs_op1))) 
               & (0xffffffffU == (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_divzero 
            = ((~ (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                   >> 7U)) & (0U == (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
    } else {
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_overflow 
            = (((~ (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                    >> 7U)) & (0x8000000000000000ULL 
                               == vlSelfRef.top__DOT__c__DOT__exs_op1)) 
               & (0xffffffffffffffffULL == vlSelfRef.top__DOT__c__DOT__exs_op2));
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_divzero 
            = ((~ (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                   >> 7U)) & (0ULL == vlSelfRef.top__DOT__c__DOT__exs_op2));
    }
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_error 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_overflow) 
           | (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_divzero));
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__value 
        = vlSelfRef.top__DOT__c__DOT__exs_op2;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__funct3 
        = (7U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                 >> 7U));
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__is_op32 
        = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                 >> 0xdU));
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1397389703115109890ull);
    if (__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__is_op32) {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32 
            = (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__value);
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext 
            = ((1U & (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__funct3))
                ? (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32))
                : (((QData)((IData)((- (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32))));
    } else {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext 
            = __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__value;
    }
    __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__Vfuncout 
        = ((1U & (IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__funct3))
            ? vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext
            : ((1U & (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext))
                : vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext));
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor 
        = __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__Vfuncout;
    __Vtableidx1 = (((vlSelfRef.top__DOT__c__DOT__exs_op1 
                      == vlSelfRef.top__DOT__c__DOT__exs_op2) 
                     << 5U) | ((VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__exs_op1, vlSelfRef.top__DOT__c__DOT__exs_op2) 
                                << 4U) | (((vlSelfRef.top__DOT__c__DOT__exs_op1 
                                            < vlSelfRef.top__DOT__c__DOT__exs_op2) 
                                           << 3U) | 
                                          (7U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                                 >> 7U)))));
    vlSelfRef.top__DOT__c__DOT__exs_brunit_take = Vtop__ConstPool__TABLE_h7ef2948f_0
        [__Vtableidx1];
    if ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x80U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1 
                = vlSelfRef.top__DOT__c__DOT__exs_op1;
        } else {
            vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value 
                = ((0x2000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                    ? ([&]() {
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__value 
                            = (IData)(vlSelfRef.top__DOT__c__DOT__exs_op1);
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__Vfuncout 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__value 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__value)));
                    }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__Vfuncout)
                    : vlSelfRef.top__DOT__c__DOT__exs_op1);
            vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__Vfuncout 
                = ((1U & (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value 
                                  >> 0x3fU))) ? (1ULL 
                                                 + 
                                                 (~ vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value))
                    : vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value);
            vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1 
                = vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__Vfuncout;
        }
    } else {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value 
            = ((0x2000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                ? ([&]() {
                    vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__value 
                        = (IData)(vlSelfRef.top__DOT__c__DOT__exs_op1);
                    vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__Vfuncout 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__value 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__value)));
                }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__Vfuncout)
                : vlSelfRef.top__DOT__c__DOT__exs_op1);
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__Vfuncout 
            = ((1U & (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value))
                : vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value);
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1 
            = vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__Vfuncout;
    }
    if ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op2 
            = vlSelfRef.top__DOT__c__DOT__exs_op2;
    } else {
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value 
            = ((0x2000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                ? ([&]() {
                    vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__value 
                        = (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2);
                    vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__Vfuncout 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__value 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__value)));
                }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__Vfuncout)
                : vlSelfRef.top__DOT__c__DOT__exs_op2);
        vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__Vfuncout 
            = ((1U & (IData)((vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value))
                : vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value);
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op2 
            = vlSelfRef.__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__Vfuncout;
    }
    top__DOT__c__DOT__alum__DOT__add = (vlSelfRef.top__DOT__c__DOT__exs_op1 
                                        + vlSelfRef.top__DOT__c__DOT__exs_op2);
    vlSelfRef.top__DOT__c__DOT__if_fifo_rready = (1U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid)) 
                                                     | (IData)(vlSelfRef.top__DOT__c__DOT__exq_rready)));
    if ((0x8000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
        if ((0x200U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_alu_result 
                = ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                    ? ((0x80U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                        ? (vlSelfRef.top__DOT__c__DOT__exs_op1 
                           & vlSelfRef.top__DOT__c__DOT__exs_op2)
                        : (vlSelfRef.top__DOT__c__DOT__exs_op1 
                           | vlSelfRef.top__DOT__c__DOT__exs_op2))
                    : ((0x80U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                        ? ((0x20U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                            ? ([&]() {
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value64 
                                    = VL_SHIFTRS_QQI(64,64,6, vlSelfRef.top__DOT__c__DOT__exs_op1, 
                                                     (0x3fU 
                                                      & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value32 
                                    = VL_SHIFTRS_III(32,32,5, (IData)(vlSelfRef.top__DOT__c__DOT__exs_op1), 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__is_op32 
                                    = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                             >> 0xdU));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__is_op32)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value32 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value32)))
                                        : vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value64);
                            }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__Vfuncout)
                            : ([&]() {
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value64 
                                    = (vlSelfRef.top__DOT__c__DOT__exs_op1 
                                       >> (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value32 
                                    = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_op1) 
                                       >> (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__is_op32 
                                    = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                             >> 0xdU));
                                vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__Vfuncout 
                                    = ((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__is_op32)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value32 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value32)))
                                        : vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value64);
                            }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__Vfuncout))
                        : (vlSelfRef.top__DOT__c__DOT__exs_op1 
                           ^ vlSelfRef.top__DOT__c__DOT__exs_op2)));
        } else if ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.top__DOT__c__DOT__exs_alu_result 
                = ((0x80U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                    ? (QData)((IData)((vlSelfRef.top__DOT__c__DOT__exs_op1 
                                       < vlSelfRef.top__DOT__c__DOT__exs_op2)))
                    : (QData)((IData)(VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__exs_op1, vlSelfRef.top__DOT__c__DOT__exs_op2))));
        } else if ((0x80U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
            vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value64 
                = (vlSelfRef.top__DOT__c__DOT__exs_op1 
                   << (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
            vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value32 
                = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_op1) 
                   << (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2)));
            vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__is_op32 
                = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                         >> 0xdU));
            vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__is_op32)
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value32 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value32)))
                    : vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value64);
            vlSelfRef.top__DOT__c__DOT__exs_alu_result 
                = vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__Vfuncout;
        } else {
            vlSelfRef.top__DOT__c__DOT__exs_alu_result 
                = (((2U == (0x3fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                     >> 0x12U))) | 
                    (0U == (0x7fU & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])))
                    ? ([&]() {
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value64 
                            = top__DOT__c__DOT__alum__DOT__add;
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value32 
                            = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_op1) 
                               + (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2));
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__is_op32 
                            = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                     >> 0xdU));
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__is_op32)
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value32 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value32)))
                                : vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value64);
                    }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__Vfuncout)
                    : ([&]() {
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value64 
                            = (vlSelfRef.top__DOT__c__DOT__exs_op1 
                               - vlSelfRef.top__DOT__c__DOT__exs_op2);
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value32 
                            = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_op1) 
                               - (IData)(vlSelfRef.top__DOT__c__DOT__exs_op2));
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__is_op32 
                            = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                     >> 0xdU));
                        vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__Vfuncout 
                            = ((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__is_op32)
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value32 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value32)))
                                : vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value64);
                    }(), vlSelfRef.__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__Vfuncout));
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__exs_alu_result 
            = top__DOT__c__DOT__alum__DOT__add;
    }
    vlSelfRef.top__DOT__c__DOT__memq_wdata[8U] = ((0x3fU 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_wdata[8U]) 
                                                  | (vlSelfRef.top__DOT__c__DOT__exq_rdata[0U] 
                                                     << 6U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[9U] = ((
                                                   vlSelfRef.top__DOT__c__DOT__exq_rdata[0U] 
                                                   >> 0x1aU) 
                                                  | (vlSelfRef.top__DOT__c__DOT__exq_rdata[1U] 
                                                     << 6U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[0xaU] = 
        ((vlSelfRef.top__DOT__c__DOT__exq_rdata[1U] 
          >> 0x1aU) | (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                       << 6U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[0xbU] = 
        ((vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
          >> 0x1aU) | (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                       << 6U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[0xcU] = 
        ((vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
          >> 0x1aU) | (vlSelfRef.top__DOT__c__DOT__exq_rdata[4U] 
                       << 6U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[0xdU] = 
        (0x3fffffffU & ((vlSelfRef.top__DOT__c__DOT__exq_rdata[4U] 
                         >> 0x1aU) | (vlSelfRef.top__DOT__c__DOT__exq_rdata[5U] 
                                      << 6U)));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[2U] = ((1U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_wdata[2U]) 
                                                  | ((IData)(vlSelfRef.top__DOT__c__DOT__exs_rs2_data) 
                                                     << 1U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[3U] = (((IData)(vlSelfRef.top__DOT__c__DOT__exs_rs2_data) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelfRef.top__DOT__c__DOT__exs_rs2_data 
                                                              >> 0x20U)) 
                                                     << 1U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[4U] = (((IData)(
                                                           (vlSelfRef.top__DOT__c__DOT__exs_rs2_data 
                                                            >> 0x20U)) 
                                                   >> 0x1fU) 
                                                  | ((IData)(vlSelfRef.top__DOT__c__DOT__exs_rs1_data) 
                                                     << 1U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[5U] = (((IData)(vlSelfRef.top__DOT__c__DOT__exs_rs1_data) 
                                                   >> 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelfRef.top__DOT__c__DOT__exs_rs1_data 
                                                              >> 0x20U)) 
                                                     << 1U));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[6U] = (((IData)(
                                                           (vlSelfRef.top__DOT__c__DOT__exs_rs1_data 
                                                            >> 0x20U)) 
                                                   >> 0x1fU) 
                                                  | (((IData)(
                                                              ((0x4000U 
                                                                & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                : vlSelfRef.top__DOT__c__DOT__exs_alu_result)) 
                                                      << 6U) 
                                                     | (0x3eU 
                                                        & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                           >> 6U))));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[7U] = ((1U 
                                                   & ((IData)(
                                                              ((0x4000U 
                                                                & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                : vlSelfRef.top__DOT__c__DOT__exs_alu_result)) 
                                                      >> 0x1aU)) 
                                                  | ((0x3eU 
                                                      & ((IData)(
                                                                 ((0x4000U 
                                                                   & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                   ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                   : vlSelfRef.top__DOT__c__DOT__exs_alu_result)) 
                                                         >> 0x1aU)) 
                                                     | ((IData)(
                                                                (((0x4000U 
                                                                   & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                   ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                   : vlSelfRef.top__DOT__c__DOT__exs_alu_result) 
                                                                 >> 0x20U)) 
                                                        << 6U)));
    vlSelfRef.top__DOT__c__DOT__memq_wdata[8U] = ((0xffffffc0U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_wdata[8U]) 
                                                  | ((1U 
                                                      & ((IData)(
                                                                 (((0x4000U 
                                                                    & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                    ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                    : vlSelfRef.top__DOT__c__DOT__exs_alu_result) 
                                                                  >> 0x20U)) 
                                                         >> 0x1aU)) 
                                                     | (0x3eU 
                                                        & ((IData)(
                                                                   (((0x4000U 
                                                                      & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                                                      ? vlSelfRef.top__DOT__c__DOT__exs_muldiv_result
                                                                      : vlSelfRef.top__DOT__c__DOT__exs_alu_result) 
                                                                    >> 0x20U)) 
                                                           >> 0x1aU))));
    VL_ASSIGNBIT_WI(0x40U, vlSelfRef.top__DOT__c__DOT__memq_wdata, 
                    (1U & ((vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                            >> 0xcU) | (([&]() {
                            vlSelfRef.__Vfunc_inst_is_br__6__ctrl 
                                = (0xffffffU & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U]);
                            vlSelfRef.__Vfunc_inst_is_br__6__Vfuncout 
                                = (8U == (0x3fU & (vlSelfRef.__Vfunc_inst_is_br__6__ctrl 
                                                   >> 0x12U)));
                        }(), (IData)(vlSelfRef.__Vfunc_inst_is_br__6__Vfuncout)) 
                                        & (IData)(vlSelfRef.top__DOT__c__DOT__exs_brunit_take)))));
    VL_ASSIGNSEL_WQ(446,64,0U, vlSelfRef.top__DOT__c__DOT__memq_wdata, 
                    (([&]() {
                    vlSelfRef.__Vfunc_inst_is_br__7__ctrl 
                        = (0xffffffU & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U]);
                    vlSelfRef.__Vfunc_inst_is_br__7__Vfuncout 
                        = (8U == (0x3fU & (vlSelfRef.__Vfunc_inst_is_br__7__ctrl 
                                           >> 0x12U)));
                }(), (IData)(vlSelfRef.__Vfunc_inst_is_br__7__Vfuncout))
                      ? ((((QData)((IData)(vlSelfRef.top__DOT__c__DOT__exq_rdata[5U])) 
                           << 0x28U) | (((QData)((IData)(
                                                         vlSelfRef.top__DOT__c__DOT__exq_rdata[4U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__c__DOT__exq_rdata[3U])) 
                                                   >> 0x18U))) 
                         + (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__exq_rdata[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.top__DOT__c__DOT__exq_rdata[0U]))))
                      : (0xfffffffffffffffeULL & vlSelfRef.top__DOT__c__DOT__exs_alu_result)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__top__DOT__mem__DOT__mem__v0) {
        vlSelfRef.top__DOT__mem__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__mem__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__mem__DOT__mem__v0;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/top.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
