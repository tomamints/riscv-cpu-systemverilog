// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_wmask_expand__5__Vfuncout;
    __Vfunc_wmask_expand__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_wmask_expand__5__wmask;
    __Vfunc_wmask_expand__5__wmask = 0;
    QData/*63:0*/ __Vfunc_wmask_expand__5__result;
    __Vfunc_wmask_expand__5__result = 0;
    QData/*63:0*/ __VdlyVal__top__DOT__c__DOT__regfile__v0;
    __VdlyVal__top__DOT__c__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__c__DOT__regfile__v0;
    __VdlyDim0__top__DOT__c__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__c__DOT__regfile__v0;
    __VdlySet__top__DOT__c__DOT__regfile__v0 = 0;
    // Body
    VL_WRITEF_NX("mulunit_rvalid %b\nmulunit_result %39#\nmulunit_state %1#\nmulunit_op1 %20#\nmulunit_op2 %20#\nmulunit_add_count %11d\nop1 = %x du_dividend= %x\nop2 = %x du_divisor= %x\n",0,
                 1,(2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state)),
                 128,vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result.data(),
                 2,(IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state),
                 64,vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1,
                 64,vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op2,
                 32,vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count,
                 64,vlSelfRef.top__DOT__c__DOT__exs_op1,
                 64,vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_dividend,
                 64,vlSelfRef.top__DOT__c__DOT__exs_op2,
                 64,vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor);
    __VdlySet__top__DOT__c__DOT__regfile__v0 = 0U;
    VL_WRITEF_NX("DECODE: inst=%x itype=%0# is_muldiv=%b funct7=%0# imm=%x\nmem_data_hazard = %1#\nmems_valid = %1#\nmems_ctrl.rwb_en = %1#\nmems_rd_addr = %2#\nexs_rs1_addr = %2#\ncompare = %1#\n",0,
                 32,vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U],
                 6,(0x3fU & (vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                             >> 0x12U)),1,(1U & (vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                                 >> 0xeU)),
                 7,(0x7fU & vlSelfRef.top__DOT__c__DOT__ids_ctrl),
                 64,vlSelfRef.top__DOT__c__DOT__ids_imm,
                 1,(IData)(vlSelfRef.top__DOT__c__DOT__exs_mem_data_hazard),
                 1,vlSelfRef.top__DOT__c__DOT__memq_rvalid,
                 1,(1U & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                          >> 0x17U)),5,(0x1fU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                 >> 5U)),
                 5,(0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                             >> 7U)),1,((0x1fU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                  >> 5U)) 
                                        == (0x1fU & 
                                            (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                             >> 7U))));
    vlSelfRef.__VdlySet__top__DOT__mem__DOT__mem__v0 = 0U;
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_rvalided 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid) 
                                                      & (IData)(vlSelfRef.top__DOT__c__DOT__exq_rready)))) 
                                                 && ((IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_rvalided) 
                                                     | (2U 
                                                        == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)))));
    if ((((IData)(vlSelfRef.top__DOT__c__DOT__wbq_rvalid) 
          & (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
             >> 0x11U)) & (0U != (0x1fU & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                            << 1U) 
                                           | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                              >> 0x1fU)))))) {
        if (VL_UNLIKELY(((3U == (0x1fU & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                           << 1U) | 
                                          (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                           >> 0x1fU))))))) {
            VL_WRITEF_NX("\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217\343\202\217WB x3 <= %x @pc=%x\n",0,
                         64,vlSelfRef.top__DOT__c__DOT__wbs_wb_data,
                         64,(((QData)((IData)(vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xbU])) 
                              << 0x28U) | (((QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xaU])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U])) 
                                              >> 0x18U))));
        }
        __VdlyVal__top__DOT__c__DOT__regfile__v0 = vlSelfRef.top__DOT__c__DOT__wbs_wb_data;
        __VdlyDim0__top__DOT__c__DOT__regfile__v0 = 
            (0x1fU & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                       << 1U) | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                 >> 0x1fU)));
        __VdlySet__top__DOT__c__DOT__regfile__v0 = 1U;
    }
    if (vlSelfRef.top__DOT__mem__DOT__state) {
        __Vfunc_wmask_expand__5__wmask = vlSelfRef.top__DOT__mem__DOT__wmask_saved;
        __Vfunc_wmask_expand__5__result = 0;
        __Vfunc_wmask_expand__5__result = ((0xfffffffffffffff8ULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | (IData)((IData)(
                                                             ((4U 
                                                               & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(__Vfunc_wmask_expand__5__wmask)))))));
        __Vfunc_wmask_expand__5__result = ((0xffffffffffffffc7ULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(__Vfunc_wmask_expand__5__wmask)))))) 
                                              << 3U));
        __Vfunc_wmask_expand__5__result = ((0xfffffffffffffe3fULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   << 1U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(__Vfunc_wmask_expand__5__wmask)))))) 
                                              << 6U));
        __Vfunc_wmask_expand__5__result = ((0xfffffffffffff1ffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   << 1U)) 
                                                               | ((2U 
                                                                   & (IData)(__Vfunc_wmask_expand__5__wmask)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 1U)))))) 
                                              << 9U));
        __Vfunc_wmask_expand__5__result = ((0xffffffffffff8fffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   << 1U)) 
                                                               | ((2U 
                                                                   & (IData)(__Vfunc_wmask_expand__5__wmask)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 1U)))))) 
                                              << 0xcU));
        __Vfunc_wmask_expand__5__result = ((0xfffffffffff87fffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((8U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   << 1U)) 
                                                               | ((4U 
                                                                   & (IData)(__Vfunc_wmask_expand__5__wmask)) 
                                                                  | (3U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 1U)))))) 
                                              << 0xfU));
        __Vfunc_wmask_expand__5__result = ((0xffffffffffc7ffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & (IData)(__Vfunc_wmask_expand__5__wmask)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 2U)))))) 
                                              << 0x13U));
        __Vfunc_wmask_expand__5__result = ((0xfffffffffe3fffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 1U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 1U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 2U)))))) 
                                              << 0x16U));
        __Vfunc_wmask_expand__5__result = ((0xfffffffff1ffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 1U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 3U)))))) 
                                              << 0x19U));
        __Vfunc_wmask_expand__5__result = ((0xffffffff8fffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 1U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 2U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 3U)))))) 
                                              << 0x1cU));
        __Vfunc_wmask_expand__5__result = ((0xfffffff87fffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((8U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 1U)) 
                                                               | ((4U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 2U)) 
                                                                  | (3U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 3U)))))) 
                                              << 0x1fU));
        __Vfunc_wmask_expand__5__result = ((0xffffffc7ffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 3U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 4U)))))) 
                                              << 0x23U));
        __Vfunc_wmask_expand__5__result = ((0xfffffe3fffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 3U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 3U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 4U)))))) 
                                              << 0x26U));
        __Vfunc_wmask_expand__5__result = ((0xfffff1ffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 3U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 5U)))))) 
                                              << 0x29U));
        __Vfunc_wmask_expand__5__result = ((0xffff8fffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 3U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 5U)))))) 
                                              << 0x2cU));
        __Vfunc_wmask_expand__5__result = ((0xfff87fffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((8U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 3U)) 
                                                               | ((4U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 4U)) 
                                                                  | (3U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 5U)))))) 
                                              << 0x2fU));
        __Vfunc_wmask_expand__5__result = ((0xffc7ffffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 4U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 5U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 6U)))))) 
                                              << 0x33U));
        __Vfunc_wmask_expand__5__result = ((0xfe3fffffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 5U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 5U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 6U)))))) 
                                              << 0x36U));
        __Vfunc_wmask_expand__5__result = ((0xf1ffffffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 5U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 6U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 7U)))))) 
                                              << 0x39U));
        __Vfunc_wmask_expand__5__result = ((0x8fffffffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              ((4U 
                                                                & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                   >> 5U)) 
                                                               | ((2U 
                                                                   & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                      >> 6U)) 
                                                                  | (1U 
                                                                     & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                        >> 7U)))))) 
                                              << 0x3cU));
        __Vfunc_wmask_expand__5__result = ((0x7fffffffffffffffULL 
                                            & __Vfunc_wmask_expand__5__result) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(__Vfunc_wmask_expand__5__wmask) 
                                                                  >> 7U)))) 
                                              << 0x3fU));
        __Vfunc_wmask_expand__5__Vfuncout = __Vfunc_wmask_expand__5__result;
        vlSelfRef.top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded 
            = __Vfunc_wmask_expand__5__Vfuncout;
        vlSelfRef.__VdlyVal__top__DOT__mem__DOT__mem__v0 
            = ((vlSelfRef.top__DOT__mem__DOT__wdata_saved 
                & vlSelfRef.top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded) 
               | (vlSelfRef.top__DOT__mem__DOT__rdata_saved 
                  & (~ vlSelfRef.top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded)));
        vlSelfRef.__VdlyDim0__top__DOT__mem__DOT__mem__v0 
            = vlSelfRef.top__DOT__mem__DOT__addr_saved;
        vlSelfRef.__VdlySet__top__DOT__mem__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__c__DOT__exs_muldiv_is_requested = 0U;
    } else if (((IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid) 
                & (IData)(vlSelfRef.top__DOT__c__DOT__exq_rready))) {
        vlSelfRef.top__DOT__c__DOT__exs_muldiv_is_requested = 0U;
    } else if (((IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid) 
                & (0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)))) {
        vlSelfRef.top__DOT__c__DOT__exs_muldiv_is_requested = 1U;
    }
    VL_WRITEF_NX("check_start\n",0);
    if (VL_UNLIKELY(((((((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)) 
                         & (~ (IData)(vlSelfRef.top__DOT__mem__DOT__state))) 
                        & (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen)) 
                       & (0x1000ULL == vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr)) 
                      & (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata))))) {
        if (VL_LIKELY(((1ULL == vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata)))) {
            VL_WRITEF_NX("riscv-tests success!\n",0);
        } else {
            VL_WRITEF_NX("riscv-tests failed!\n[%0t] %%Error: top.sv:56: Assertion failed in %Ntop.unnamedblk1: wdata : %x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),64,vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata);
            VL_STOP_MT("src/top.sv", 56, "");
        }
        vlSelfRef.test_success = (1ULL == vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata);
        VL_FINISH_MT("src/top.sv", 59, "");
    }
    if (__VdlySet__top__DOT__c__DOT__regfile__v0) {
        vlSelfRef.top__DOT__c__DOT__regfile[__VdlyDim0__top__DOT__c__DOT__regfile__v0] 
            = __VdlyVal__top__DOT__c__DOT__regfile__v0;
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h5a979007_0;
extern const VlWide<12>/*383:0*/ Vtop__ConstPool__CONST_h6d62b317_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1;
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1 = 0;
    CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2;
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2 = 0;
    CData/*0:0*/ __Vfunc_inst_is_br__8__Vfuncout;
    __Vfunc_inst_is_br__8__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_inst_is_br__8__ctrl;
    __Vfunc_inst_is_br__8__ctrl = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__Vfuncout;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__value;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__value = 0;
    QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__Vfuncout;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__value;
    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__value = 0;
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_6;
    __VdfgRegularize_h9a3b41c9_0_6 = 0;
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_7;
    __VdfgRegularize_h9a3b41c9_0_7 = 0;
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_8;
    __VdfgRegularize_h9a3b41c9_0_8 = 0;
    QData/*63:0*/ __Vdly__top__DOT__c__DOT__if_pc;
    __Vdly__top__DOT__c__DOT__if_pc = 0;
    CData/*0:0*/ __Vdly__top__DOT__c__DOT__if_is_requested;
    __Vdly__top__DOT__c__DOT__if_is_requested = 0;
    CData/*0:0*/ __Vdly__top__DOT__c__DOT__if_fifo_wvalid;
    __Vdly__top__DOT__c__DOT__if_fifo_wvalid = 0;
    QData/*63:0*/ __Vdly__top__DOT__c__DOT__if_pc_requested;
    __Vdly__top__DOT__c__DOT__if_pc_requested = 0;
    QData/*63:0*/ __Vdly__top__DOT__c__DOT__clock_count;
    __Vdly__top__DOT__c__DOT__clock_count = 0;
    CData/*2:0*/ __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail;
    __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail = 0;
    CData/*2:0*/ __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head;
    __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head = 0;
    CData/*2:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved = 0;
    CData/*0:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved = 0;
    CData/*0:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved = 0;
    CData/*0:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved = 0;
    CData/*1:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__state = 0;
    CData/*1:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result;
    VL_ZERO_W(128, __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result);
    IData/*31:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count;
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count = 0;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext;
    VL_ZERO_W(128, __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext);
    VlWide<4>/*127:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext;
    VL_ZERO_W(128, __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext);
    CData/*1:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 0;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved;
    VL_ZERO_W(128, __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved);
    QData/*63:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient;
    __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient = 0;
    VlWide<4>/*127:0*/ __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved;
    VL_ZERO_W(128, __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved);
    VlWide<3>/*95:0*/ __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0;
    VL_ZERO_W(96, __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0);
    CData/*2:0*/ __VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0;
    __VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0;
    __VdlySet__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient;
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[0U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[1U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[2U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[3U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count;
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U];
    __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U] 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U];
    __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head 
        = vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head;
    vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state 
        = vlSelfRef.top__DOT__c__DOT__memu__DOT__state;
    __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__is_op32_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__op2sign_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved 
        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved;
    __Vdly__top__DOT__c__DOT__mdu__DOT__state = vlSelfRef.top__DOT__c__DOT__mdu__DOT__state;
    vlSelfRef.__Vdly__top__DOT__mem__DOT__state = vlSelfRef.top__DOT__mem__DOT__state;
    __Vdly__top__DOT__c__DOT__if_is_requested = vlSelfRef.top__DOT__c__DOT__if_is_requested;
    __Vdly__top__DOT__c__DOT__if_fifo_wvalid = vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid;
    __Vdly__top__DOT__c__DOT__if_pc_requested = vlSelfRef.top__DOT__c__DOT__if_pc_requested;
    __Vdly__top__DOT__c__DOT__if_pc = vlSelfRef.top__DOT__c__DOT__if_pc;
    __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail 
        = vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail;
    __VdlySet__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0 = 0U;
    __Vdly__top__DOT__c__DOT__clock_count = vlSelfRef.top__DOT__c__DOT__clock_count;
    if (vlSelfRef.rst) {
        if ((2U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state))) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 0U;
            } else if ((0x40U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count))) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 3U;
            } else {
                if (VL_GTE_W(4, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved)) {
                    VL_SUB_W(4, __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved);
                    __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient 
                        = (1ULL | VL_SHIFTL_QQI(64,64,32, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient, 1U));
                } else {
                    __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient 
                        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient, 1U);
                }
                vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count)));
                VL_SHIFTR_WWI(128,128,32, __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved, vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved, 1U);
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state))) {
            if ((0U == (((vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U] 
                          | vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U]) 
                         | vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U]) 
                        | vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U]))) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient = 0xffffffffffffffffULL;
                __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 3U;
            } else {
                __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 2U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0) 
                    & ((~ (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_error)) 
                       & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1)))) {
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U] 
                = (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_dividend);
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U] 
                = (IData)((vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_dividend 
                           >> 0x20U));
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U] = 0U;
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U] = 0U;
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U] = 0U;
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U] 
                = ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor) 
                   << 0x1fU);
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U] 
                = (((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor) 
                    >> 1U) | ((IData)((vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor 
                                       >> 0x20U)) << 0x1fU));
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U] 
                = ((IData)((vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_divisor 
                            >> 0x20U)) >> 1U);
            __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient = 0ULL;
            vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count = 0U;
            __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 1U;
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state))) {
            if (((~ (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1)) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0))) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state = 1U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[0U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[1U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[2U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[3U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U] 
                    = (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1);
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U] 
                    = (IData)((vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op1 
                               >> 0x20U));
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U] 
                    = (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op2);
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U] 
                    = (IData)((vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_op2 
                               >> 0x20U));
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U] = 0U;
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U] = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state))) {
            if ((0x40U == vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count)) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state = 2U;
            } else {
                if ((1U & (vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[
                           (3U & (vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count 
                                  >> 5U))] >> (0x1fU 
                                               & vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count)))) {
                    VL_ADD_W(4, __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result, vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result, vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext);
                }
                VL_SHIFTL_WWI(128,128,32, __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext, vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext, 1U);
                __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count 
                    = ((IData)(1U) + vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count);
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state))) {
            __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state = 0U;
        }
        if (vlSelfRef.top__DOT__c__DOT__control_hazard) {
            __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head = 0U;
            __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail = 0U;
        } else {
            if (((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rready) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid))) {
                __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head)));
            }
            if (((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid))) {
                __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[0U] 
                    = vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[0U];
                __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[1U] 
                    = vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[1U];
                __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[2U] 
                    = vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[2U];
                __VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0 
                    = vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail;
                __VdlySet__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0 = 1U;
                __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail)));
            }
        }
    } else {
        __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient = 0ULL;
        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[0U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[1U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[2U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[3U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U] = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U] = 0U;
        __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head = 0U;
        __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail = 0U;
    }
    if (VL_UNLIKELY((vlSelfRef.rst))) {
        __Vdly__top__DOT__c__DOT__clock_count = (1ULL 
                                                 + vlSelfRef.top__DOT__c__DOT__clock_count);
        VL_WRITEF_NX("\n# %20#\nIF ------\n     pc : %x\n is req : %b\n pc req : %x\nID ------\n",0,
                     64,vlSelfRef.top__DOT__c__DOT__clock_count,
                     64,vlSelfRef.top__DOT__c__DOT__if_pc,
                     1,(IData)(vlSelfRef.top__DOT__c__DOT__if_is_requested),
                     64,vlSelfRef.top__DOT__c__DOT__if_pc_requested);
        if (VL_UNLIKELY((vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid))) {
            VL_WRITEF_NX("  %x : %x\n  itype : %b\n  imm   : %x\n",0,
                         64,(((QData)((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[2U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[1U]))),
                         32,vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U],
                         6,(0x3fU & (vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                     >> 0x12U)),64,
                         vlSelfRef.top__DOT__c__DOT__ids_imm);
        }
        VL_WRITEF_NX("EX -----\n",0);
        if (VL_UNLIKELY((vlSelfRef.top__DOT__c__DOT__exq_rvalid))) {
            VL_WRITEF_NX("  %x : %x\n  op1     : %x\n  op2     : %x\n  alu     : %x\n  rs1/rs2 : %0#/%0#\n  reg1/reg2 : %x/%x\n  dhazard : %b\n  mem_hazard=%b wb_hazard=%b\n  muldiv_stall : %b\n  wbs_valid=%b wbs_ctrl.rwb_en=%b wbs_rd=%0#\n  exq_rready=%1# memq_wready=%1# if_fifo_rready=%1#\n",0,
                         64,(((QData)((IData)(vlSelfRef.top__DOT__c__DOT__exq_rdata[5U])) 
                              << 0x28U) | (((QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__exq_rdata[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.top__DOT__c__DOT__exq_rdata[3U])) 
                                              >> 0x18U))),
                         32,((vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                              << 8U) | (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                                        >> 0x18U)),
                         64,vlSelfRef.top__DOT__c__DOT__exs_op1,
                         64,vlSelfRef.top__DOT__c__DOT__exs_op2,
                         64,vlSelfRef.top__DOT__c__DOT__exs_alu_result,
                         5,(0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                     >> 7U)),5,(0x1fU 
                                                & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                                   >> 0xcU)),
                         64,vlSelfRef.top__DOT__c__DOT__exs_rs1_data,
                         64,vlSelfRef.top__DOT__c__DOT__exs_rs2_data,
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__exs_data_hazard),
                         1,vlSelfRef.top__DOT__c__DOT__exs_mem_data_hazard,
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__exs_wb_data_hazard),
                         1,vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall,
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__wbq_rvalid),
                         1,(1U & (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                  >> 0x11U)),5,(0x1fU 
                                                & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                                    << 1U) 
                                                   | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                                      >> 0x1fU))),
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__exq_rready),
                         1,vlSelfRef.top__DOT__c__DOT__memq_wready,
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rready));
            if (VL_UNLIKELY((((vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                               >> 0xeU) & (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall))))) {
                VL_WRITEF_NX(" muldiv result : %x\n",0,
                             64,vlSelfRef.top__DOT__c__DOT__exs_muldiv_result);
            }
            if (VL_UNLIKELY((([&]() {
                                __Vfunc_inst_is_br__8__ctrl 
                                    = (0xffffffU & 
                                       vlSelfRef.top__DOT__c__DOT__exq_rdata[2U]);
                                __Vfunc_inst_is_br__8__Vfuncout 
                                    = (8U == (0x3fU 
                                              & (__Vfunc_inst_is_br__8__ctrl 
                                                 >> 0x12U)));
                            }(), (IData)(__Vfunc_inst_is_br__8__Vfuncout))))) {
                VL_WRITEF_NX("  br take : %1#\n",0,
                             1,vlSelfRef.top__DOT__c__DOT__exs_brunit_take);
            }
        }
        VL_WRITEF_NX("MEM -----\n",0);
        if (VL_UNLIKELY((vlSelfRef.top__DOT__c__DOT__memq_rvalid))) {
            VL_WRITEF_NX("  %x : %x\n\tmem stall : %x\n\tmem rdata : %x\n",0,
                         64,(((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])) 
                                              >> 0x1eU))),
                         32,((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                              << 2U) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                        >> 0x1eU)),
                         1,(IData)(vlSelfRef.top__DOT__c__DOT__memu_stall),
                         64,vlSelfRef.top__DOT__c__DOT__memu_rdata);
            if (VL_UNLIKELY(((0x10000U & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])))) {
                VL_WRITEF_NX(" csr rdata : %x\n csr trap  : %b\n csr vec   : %x\n",0,
                             64,vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data,
                             1,(IData)(vlSelfRef.top__DOT__c__DOT__csru_raise_trap),
                             64,vlSelfRef.top__DOT__c__DOT__csru_trap_vector);
            }
            if (VL_UNLIKELY(((1U & vlSelfRef.top__DOT__c__DOT__memq_rdata[2U])))) {
                VL_WRITEF_NX(" JUMP TO : %x\n",0,64,
                             (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.top__DOT__c__DOT__memq_rdata[0U]))));
            }
        }
        VL_WRITEF_NX("WB ----\n",0);
        if (VL_UNLIKELY((vlSelfRef.top__DOT__c__DOT__wbq_rvalid))) {
            VL_WRITEF_NX("  %x : %x\n",0,64,(((QData)((IData)(
                                                              vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xbU])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xaU])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U])) 
                                                   >> 0x18U))),
                         32,((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                              << 8U) | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                        >> 0x18U)));
            if (VL_UNLIKELY(((0x20000U & vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U])))) {
                VL_WRITEF_NX("  reg[%2#] <= %x\n",0,
                             5,(0x1fU & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                          << 1U) | 
                                         (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                          >> 0x1fU))),
                             64,vlSelfRef.top__DOT__c__DOT__wbs_wb_data);
            }
        }
    } else {
        __Vdly__top__DOT__c__DOT__clock_count = 0ULL;
    }
    if (vlSelfRef.rst) {
        if (((~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)) 
             & (IData)(vlSymsp->TOP__top__DOT__membus.valid))) {
            vlSelfRef.top__DOT__memarb_last_i = (1U 
                                                 != (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state));
        }
    } else {
        vlSelfRef.top__DOT__memarb_last_i = 1U;
    }
    if (vlSelfRef.rst) {
        if ((((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
              & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                  >> 0x10U) & (0U != (7U & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                            >> 0xdU))))) 
             & (~ (((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                     >> 0x10U) & (1U != (3U & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                               >> 0xdU)))) 
                   & (0ULL == vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))))) {
            if ((1U & (~ VL_ONEHOT_I((((0x342U == (0xfffU 
                                                   & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                      >> 0x12U))) 
                                       << 2U) | (((0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                       >> 0x12U))) 
                                                  << 1U) 
                                                 | (0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                        >> 0x12U))))))))) {
                if ((0U != (((0x342U == (0xfffU & (
                                                   vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                   >> 0x12U))) 
                             << 2U) | (((0x341U == 
                                         (0xfffU & 
                                          (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                           >> 0x12U))) 
                                        << 1U) | (0x305U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                      >> 0x12U))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: csrunit.sv:90: Assertion failed in %Ntop.c.csru: unique case, but multiple matches found for '12'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     12,(0xfffU & (
                                                   vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                   >> 0x12U)));
                        VL_STOP_MT("src/csrunit.sv", 90, "");
                    }
                }
            }
            if ((0x305U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                      >> 0x12U)))) {
                vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec 
                    = vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked;
            } else if ((0x341U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                             >> 0x12U)))) {
                vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc 
                    = vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked;
            } else if ((0x342U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                             >> 0x12U)))) {
                vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause 
                    = vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked;
            }
        }
        if (vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt) {
            vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc 
                = (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU])) 
                    << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])) 
                                            >> 0x1eU)));
            vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause = 0xbULL;
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec = 0ULL;
        vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc = 0ULL;
        vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause = 0ULL;
    }
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[0U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[1U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved[3U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[0U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[1U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext[3U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[0U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[1U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext[3U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count;
    vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail 
        = __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail;
    vlSelfRef.top__DOT__c__DOT__clock_count = __Vdly__top__DOT__c__DOT__clock_count;
    vlSelfRef.top__DOT__c__DOT__wbq_rvalid = ((IData)(vlSelfRef.rst) 
                                              && (IData)(vlSelfRef.top__DOT__c__DOT__wbq_wvalid));
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__c__DOT__control_hazard) {
            __Vdly__top__DOT__c__DOT__if_pc = ((IData)(vlSelfRef.top__DOT__c__DOT__csru_raise_trap)
                                                ? vlSelfRef.top__DOT__c__DOT__csru_trap_vector
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__memq_rdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__memq_rdata[0U]))));
            __Vdly__top__DOT__c__DOT__if_is_requested = 0U;
            __Vdly__top__DOT__c__DOT__if_fifo_wvalid = 0U;
        } else {
            if (vlSelfRef.top__DOT__c__DOT__if_is_requested) {
                if (vlSymsp->TOP__top__DOT__i_membus.rvalid) {
                    if (((IData)(vlSymsp->TOP__top__DOT__i_membus.ready) 
                         & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two))) {
                        __Vdly__top__DOT__c__DOT__if_is_requested = 1U;
                        __Vdly__top__DOT__c__DOT__if_pc_requested 
                            = vlSelfRef.top__DOT__c__DOT__if_pc;
                        __Vdly__top__DOT__c__DOT__if_pc 
                            = vlSelfRef.top__DOT__c__DOT__if_pc_next;
                    } else {
                        __Vdly__top__DOT__c__DOT__if_is_requested = 0U;
                    }
                }
            } else if (((IData)(vlSymsp->TOP__top__DOT__i_membus.ready) 
                        & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two))) {
                __Vdly__top__DOT__c__DOT__if_is_requested = 1U;
                __Vdly__top__DOT__c__DOT__if_pc_requested 
                    = vlSelfRef.top__DOT__c__DOT__if_pc;
                __Vdly__top__DOT__c__DOT__if_pc = vlSelfRef.top__DOT__c__DOT__if_pc_next;
            }
            if (((IData)(vlSelfRef.top__DOT__c__DOT__if_is_requested) 
                 & (IData)(vlSymsp->TOP__top__DOT__i_membus.rvalid))) {
                __Vdly__top__DOT__c__DOT__if_fifo_wvalid = 1U;
                vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[0U] 
                    = ((1U & (IData)((vlSelfRef.top__DOT__memarb_last_iaddr 
                                      >> 2U))) ? (IData)(
                                                         (vlSymsp->TOP__top__DOT__membus.rdata 
                                                          >> 0x20U))
                        : (IData)(vlSymsp->TOP__top__DOT__membus.rdata));
                vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[1U] 
                    = (IData)(vlSelfRef.top__DOT__c__DOT__if_pc_requested);
                vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[2U] 
                    = (IData)((vlSelfRef.top__DOT__c__DOT__if_pc_requested 
                               >> 0x20U));
            } else if (((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid) 
                        & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready))) {
                __Vdly__top__DOT__c__DOT__if_fifo_wvalid = 0U;
            }
        }
        if (vlSelfRef.top__DOT__c__DOT__wbq_wvalid) {
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[0U] 
                = (IData)(vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data);
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[1U] 
                = (IData)((vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
                           >> 0x20U));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[2U] 
                = (IData)(vlSelfRef.top__DOT__c__DOT__memu_rdata);
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[3U] 
                = (IData)((vlSelfRef.top__DOT__c__DOT__memu_rdata 
                           >> 0x20U));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[4U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[0U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[7U] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[5U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[1U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[8U] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[7U] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[6U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[2U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[9U] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[8U] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[7U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[3U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[9U] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[4U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                = (Vtop__ConstPool__CONST_h5a979007_0[5U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xaU] 
                = (Vtop__ConstPool__CONST_h5a979007_0[6U] 
                   & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU] 
                       << 0x1aU) | (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU] 
                                    >> 6U)));
            vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xbU] 
                = (Vtop__ConstPool__CONST_h5a979007_0[7U] 
                   & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU] 
                      >> 6U));
        }
    } else {
        __Vdly__top__DOT__c__DOT__if_pc = 0ULL;
        __Vdly__top__DOT__c__DOT__if_is_requested = 0U;
        __Vdly__top__DOT__c__DOT__if_pc_requested = 0ULL;
        __Vdly__top__DOT__c__DOT__if_fifo_wvalid = 0U;
        vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[0U] = 0U;
        vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[1U] = 0U;
        vlSelfRef.top__DOT__c__DOT__if_fifo_wdata[2U] = 0U;
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[0U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[0U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[1U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[1U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[2U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[2U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[3U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[3U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[4U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[4U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[5U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[5U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[6U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[6U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[7U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[7U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[8U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] = 
            Vtop__ConstPool__CONST_h6d62b317_0[9U];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xaU] 
            = Vtop__ConstPool__CONST_h6d62b317_0[0xaU];
        vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xbU] 
            = Vtop__ConstPool__CONST_h6d62b317_0[0xbU];
    }
    if (vlSelfRef.rst) {
        if ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state))) {
            if (((IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_ready) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid))) {
                __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved 
                    = (7U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                             >> 7U));
                __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved 
                    = (1U & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                             >> 0xdU));
                if ((0x2000U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])) {
                    __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved 
                        = (1U & (IData)((vlSelfRef.top__DOT__c__DOT__exs_op1 
                                         >> 0x1fU)));
                    __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved 
                        = (1U & (IData)((vlSelfRef.top__DOT__c__DOT__exs_op2 
                                         >> 0x1fU)));
                } else {
                    __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved 
                        = (1U & (IData)((vlSelfRef.top__DOT__c__DOT__exs_op1 
                                         >> 0x3fU)));
                    __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved 
                        = (1U & (IData)((vlSelfRef.top__DOT__c__DOT__exs_op2 
                                         >> 0x3fU)));
                }
                if (vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1) {
                    if (vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_overflow) {
                        __Vdly__top__DOT__c__DOT__mdu__DOT__state = 2U;
                        vlSelfRef.top__DOT__c__DOT__exs_muldiv_result 
                            = ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                ? 0ULL : ((0x2000U 
                                           & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                           ? 0xffffffff80000000ULL
                                           : 0x8000000000000000ULL));
                    } else if (vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_signed_divzero) {
                        __Vdly__top__DOT__c__DOT__mdu__DOT__state = 2U;
                        vlSelfRef.top__DOT__c__DOT__exs_muldiv_result 
                            = ((0x100U & vlSelfRef.top__DOT__c__DOT__exq_rdata[2U])
                                ? vlSelfRef.top__DOT__c__DOT__exs_op1
                                : 0xffffffffffffffffULL);
                    } else {
                        __Vdly__top__DOT__c__DOT__mdu__DOT__state = 1U;
                    }
                } else {
                    __Vdly__top__DOT__c__DOT__mdu__DOT__state = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state))) {
            if (((~ (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1)) 
                 & (2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state)))) {
                __Vtemp_7[0U] = 1U;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
                __Vtemp_7[3U] = 0U;
                __Vtemp_8[0U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U]);
                __Vtemp_8[1U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U]);
                __Vtemp_8[2U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U]);
                __Vtemp_8[3U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U]);
                VL_ADD_W(4, __Vtemp_9, __Vtemp_7, __Vtemp_8);
                if (((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved) 
                     != (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__op2sign_saved))) {
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[0U] 
                        = __Vtemp_9[0U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[1U] 
                        = __Vtemp_9[1U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[2U] 
                        = __Vtemp_9[2U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[3U] 
                        = __Vtemp_9[3U];
                } else {
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[0U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[1U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[2U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[3U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U];
                }
                __Vtemp_11[0U] = 1U;
                __Vtemp_11[1U] = 0U;
                __Vtemp_11[2U] = 0U;
                __Vtemp_11[3U] = 0U;
                __Vtemp_12[0U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U]);
                __Vtemp_12[1U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U]);
                __Vtemp_12[2U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U]);
                __Vtemp_12[3U] = (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U]);
                VL_ADD_W(4, __Vtemp_13, __Vtemp_11, __Vtemp_12);
                if (vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved) {
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[0U] 
                        = __Vtemp_13[0U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[1U] 
                        = __Vtemp_13[1U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[2U] 
                        = __Vtemp_13[2U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[3U] 
                        = __Vtemp_13[3U];
                } else {
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[0U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[1U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[2U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U];
                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[3U] 
                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U];
                }
                __Vdly__top__DOT__c__DOT__mdu__DOT__state = 2U;
                vlSelfRef.top__DOT__c__DOT__exs_muldiv_result 
                    = ((2U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                            ? (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U])))
                            : (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu[2U]))))
                        : ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                            ? (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[2U])))
                            : ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__is_op32_saved)
                                ? ([&]() {
                                    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__value 
                                        = vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[0U];
                                    __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__Vfuncout 
                                        = (((QData)((IData)(
                                                            (- (IData)(
                                                                       (__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__value 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__value)));
                                }(), __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__23__Vfuncout)
                                : (((QData)((IData)(
                                                    vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed[0U]))))));
            } else if (((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1) 
                        & (3U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state)))) {
                vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__quo_signed 
                    = (((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved) 
                        != (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__op2sign_saved))
                        ? (1ULL + (~ vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient))
                        : vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient);
                vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__rem_signed 
                    = ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved)
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U])))))
                        : (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U]))));
                vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__resultX 
                    = ((2U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                            ? (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U])))
                            : vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__rem_signed)
                        : ((1U & (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved))
                            ? vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient
                            : vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__quo_signed));
                __Vdly__top__DOT__c__DOT__mdu__DOT__state = 2U;
                vlSelfRef.top__DOT__c__DOT__exs_muldiv_result 
                    = ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__is_op32_saved)
                        ? ([&]() {
                            __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__value 
                                = (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__resultX);
                            __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__Vfuncout 
                                = (((QData)((IData)(
                                                    (- (IData)(
                                                               (__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__value 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__value)));
                        }(), __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_64__24__Vfuncout)
                        : vlSelfRef.top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__resultX);
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state))) {
            __Vdly__top__DOT__c__DOT__mdu__DOT__state = 0U;
        }
    } else {
        __Vdly__top__DOT__c__DOT__mdu__DOT__state = 0U;
        vlSelfRef.top__DOT__c__DOT__exs_muldiv_result = 0ULL;
        __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved = 0U;
        __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved = 0U;
    }
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__c__DOT__control_hazard) {
            vlSelfRef.top__DOT__c__DOT__exq_rvalid = 0U;
        } else if (((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rready) 
                    & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid))) {
            vlSelfRef.top__DOT__c__DOT__exq_rvalid = 1U;
        } else if (vlSelfRef.top__DOT__c__DOT__exq_rready) {
            vlSelfRef.top__DOT__c__DOT__exq_rvalid = 0U;
        }
        if (((~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)) 
             & (IData)(vlSymsp->TOP__top__DOT__membus.valid))) {
            vlSelfRef.top__DOT__memarb_last_iaddr = vlSelfRef.top__DOT__c__DOT__if_pc;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__c__DOT__control_hazard)))) {
            if (((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rready) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid))) {
                vlSelfRef.top__DOT__c__DOT__exq_rdata[0U] 
                    = (IData)(vlSelfRef.top__DOT__c__DOT__ids_imm);
                vlSelfRef.top__DOT__c__DOT__exq_rdata[1U] 
                    = (IData)((vlSelfRef.top__DOT__c__DOT__ids_imm 
                               >> 0x20U));
                vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                    = ((vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][0U] 
                        << 0x18U) | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                    = ((vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][0U] 
                        >> 8U) | (vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                  [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][1U] 
                                  << 0x18U));
                vlSelfRef.top__DOT__c__DOT__exq_rdata[4U] 
                    = ((vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][1U] 
                        >> 8U) | (vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                  [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][2U] 
                                  << 0x18U));
                vlSelfRef.top__DOT__c__DOT__exq_rdata[5U] 
                    = (vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                       [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][2U] 
                       >> 8U);
            }
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__exq_rvalid = 0U;
        vlSelfRef.top__DOT__memarb_last_iaddr = 0ULL;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[0U] = 0U;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[1U] = 0U;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] = 0U;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] = 0U;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[4U] = 0U;
        vlSelfRef.top__DOT__c__DOT__exq_rdata[5U] = 0U;
    }
    vlSelfRef.top__DOT__c__DOT__if_is_requested = __Vdly__top__DOT__c__DOT__if_is_requested;
    vlSelfRef.top__DOT__c__DOT__if_pc_requested = __Vdly__top__DOT__c__DOT__if_pc_requested;
    vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid = __Vdly__top__DOT__c__DOT__if_fifo_wvalid;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__is_op32_saved 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__is_op32_saved;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__op1sign_saved 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__op1sign_saved;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__op2sign_saved 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__op2sign_saved;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__state 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__state;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du_quotient 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du_quotient;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[0U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[1U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved[3U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu__DOT__state 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu__DOT__state;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[0U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[0U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[1U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[1U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[2U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__mu_result[3U] 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__mu_result[3U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved 
        = __Vdly__top__DOT__c__DOT__mdu__DOT__funct3_saved;
    vlSelfRef.top__DOT__c__DOT__mdu__DOT__state = __Vdly__top__DOT__c__DOT__mdu__DOT__state;
    vlSelfRef.top__DOT__c__DOT__wbs_wb_data = ((0x10000U 
                                                & vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.top__DOT__c__DOT__wbq_rdata[7U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.top__DOT__c__DOT__wbq_rdata[6U])))
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U])
                                                    ? 
                                                   (4ULL 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xbU])) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         vlSelfRef.top__DOT__c__DOT__wbq_rdata[0xaU])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U])) 
                                                           >> 0x18U))))
                                                    : 
                                                   ((0x800U 
                                                     & vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U])
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.top__DOT__c__DOT__wbq_rdata[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.top__DOT__c__DOT__wbq_rdata[2U])))
                                                     : 
                                                    ((0x400U 
                                                      & vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U])
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.top__DOT__c__DOT__wbq_rdata[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.top__DOT__c__DOT__wbq_rdata[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelfRef.top__DOT__c__DOT__wbq_rdata[5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.top__DOT__c__DOT__wbq_rdata[4U])))))));
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_ready = 
        (0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state));
    vlSelfRef.top__DOT__c__DOT__if_pc = __Vdly__top__DOT__c__DOT__if_pc;
    if (__VdlySet__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0) {
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem[__VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0][0U] 
            = __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[0U];
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem[__VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0][1U] 
            = __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[1U];
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem[__VdlyDim0__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0][2U] 
            = __VdlyVal__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem__v0[2U];
    }
    vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head 
        = __Vdly__top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head;
    vlSelfRef.top__DOT__c__DOT__if_pc_next = (4ULL 
                                              + vlSelfRef.top__DOT__c__DOT__if_pc);
    vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid = ((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head) 
                                                  != (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail));
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1 
        = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail)));
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2 
        = (7U & ((IData)(2U) + (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail)));
    vlSelfRef.top__DOT__c__DOT__if_fifo_wready = ((IData)(top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1) 
                                                  != (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head));
    vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready) 
           & ((IData)(top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2) 
              != (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head)));
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][0U];
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[1U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][1U];
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[2U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][2U];
    vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1 
        = (1U & ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state))
                  ? (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                     >> 9U) : ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved) 
                               >> 2U)));
    vlSelfRef.top__DOT__c__DOT__exs_wb_data_hazard 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__wbq_rvalid) 
           & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
               >> 0x11U) & (((0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                       >> 7U)) == (0x1fU 
                                                   & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                                       << 1U) 
                                                      | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                                         >> 0x1fU)))) 
                            | ((0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                         >> 0xcU)) 
                               == (0x1fU & ((vlSelfRef.top__DOT__c__DOT__wbq_rdata[9U] 
                                             << 1U) 
                                            | (vlSelfRef.top__DOT__c__DOT__wbq_rdata[8U] 
                                               >> 0x1fU)))))));
    vlSelfRef.top__DOT__c__DOT__ids_ctrl = ((0x380U 
                                             & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                >> 5U)) 
                                            | (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 0x19U));
    if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            __VdfgRegularize_h9a3b41c9_0_7 = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]))));
            __VdfgRegularize_h9a3b41c9_0_6 = (((- (QData)((IData)(
                                                                  (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                 >> 0x14U))));
        } else {
            __VdfgRegularize_h9a3b41c9_0_7 = 0ULL;
            __VdfgRegularize_h9a3b41c9_0_6 = 0ULL;
        }
    } else {
        __VdfgRegularize_h9a3b41c9_0_7 = 0ULL;
        __VdfgRegularize_h9a3b41c9_0_6 = 0ULL;
    }
    __VdfgRegularize_h9a3b41c9_0_8 = ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                       ? 0ULL : __VdfgRegularize_h9a3b41c9_0_6);
    if ((0x40U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        if ((0x20U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            if ((0x10U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0xa0000U | (0x1ffffU 
                                           & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x400U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    } else {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    }
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
                vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
            } else if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                            vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                = (0x820000U | (0x1ffffU 
                                                & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                            vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                = (0x1000U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                            vlSelfRef.top__DOT__c__DOT__ids_imm 
                                = (((- (QData)((IData)(
                                                       (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                        >> 0x1fU)))) 
                                    << 0x15U) | (QData)((IData)(
                                                                (((0x100000U 
                                                                   & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]) 
                                                                     | (0x800U 
                                                                        & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                           >> 9U)))) 
                                                                 | (0x7feU 
                                                                    & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                       >> 0x14U))))));
                        } else {
                            vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                            vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
                        }
                    } else {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                        vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
                    }
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
                }
            } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0xa0000U | (0x1ffffU 
                                           & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x1000U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    } else {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    }
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
                vlSelfRef.top__DOT__c__DOT__ids_imm 
                    = __VdfgRegularize_h9a3b41c9_0_6;
            } else {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = ((0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                       | (((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                            ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                ? 8U : 0U) : 0U) << 0x12U));
                vlSelfRef.top__DOT__c__DOT__ids_imm 
                    = ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                        ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                            ? (((- (QData)((IData)(
                                                   (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           (((0x1000U 
                                                              & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                 >> 0x13U)) 
                                                             | (0x800U 
                                                                & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                   << 4U))) 
                                                            | ((0x7e0U 
                                                                & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                     >> 7U)))))))
                            : 0ULL) : 0ULL);
            }
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        if ((0x10U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x60000U | (0x1ffffU 
                                           & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = ((0xff1fffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                               | (0xa000U | ((1U == 
                                              (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 0x19U)) 
                                             << 0xeU)));
                    } else {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    }
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
                vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
            } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                        ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                            ? (0x430000U | (0xffffU 
                                            & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                            : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                        : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                vlSelfRef.top__DOT__c__DOT__ids_imm 
                    = __VdfgRegularize_h9a3b41c9_0_7;
            } else {
                if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x60000U | (0x1ffffU 
                                           & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = ((0xff3fffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                               | (0x8000U | ((1U == 
                                              (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 0x19U)) 
                                             << 0xeU)));
                    } else {
                        vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                            = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    }
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
                vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
            }
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                ((0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                 | (((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                      ? 0U : ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                               ? 0U : ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                        ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                            ? 4U : 0U)
                                        : 0U))) << 0x12U));
            vlSelfRef.top__DOT__c__DOT__ids_imm = (
                                                   (8U 
                                                    & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                     ? 0ULL
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                                >> 7U))))))
                                                       : 0ULL)
                                                      : 0ULL)));
        }
    } else if ((0x10U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0xa0000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x8000U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x2000U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
            } else {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            }
            vlSelfRef.top__DOT__c__DOT__ids_imm = __VdfgRegularize_h9a3b41c9_0_8;
        } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                  ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                      ? (0x420000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                      : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                  : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
            vlSelfRef.top__DOT__c__DOT__ids_imm = __VdfgRegularize_h9a3b41c9_0_7;
        } else {
            if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0xa0000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x8000U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
                }
            } else {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            }
            vlSelfRef.top__DOT__c__DOT__ids_imm = __VdfgRegularize_h9a3b41c9_0_6;
        }
    } else if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        vlSelfRef.top__DOT__c__DOT__ids_ctrl = (0x3ffffU 
                                                & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        vlSelfRef.top__DOT__c__DOT__ids_imm = 0ULL;
    } else {
        if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0xa0000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0x800U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            } else {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
            }
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        }
        vlSelfRef.top__DOT__c__DOT__ids_imm = __VdfgRegularize_h9a3b41c9_0_8;
    }
}

extern const VlWide<14>/*447:0*/ Vtop__ConstPool__CONST_h6a292389_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ top__DOT__c__DOT__csru__DOT__csr_wmask;
    top__DOT__c__DOT__csru__DOT__csr_wmask = 0;
    QData/*63:0*/ top__DOT__c__DOT__csru__DOT__wdata_raw;
    top__DOT__c__DOT__csru__DOT__wdata_raw = 0;
    CData/*0:0*/ __VdfgRegularize_hb1f32181_0_0;
    __VdfgRegularize_hb1f32181_0_0 = 0;
    CData/*0:0*/ __Vfunc_inst_is_memop__26__Vfuncout;
    __Vfunc_inst_is_memop__26__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_inst_is_memop__26__ctrl;
    __Vfunc_inst_is_memop__26__ctrl = 0;
    CData/*0:0*/ __Vfunc_inst_is_store__27__Vfuncout;
    __Vfunc_inst_is_store__27__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_inst_is_store__27__ctrl;
    __Vfunc_inst_is_store__27__ctrl = 0;
    CData/*0:0*/ __Vfunc_inst_is_memop__28__Vfuncout;
    __Vfunc_inst_is_memop__28__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_inst_is_memop__28__ctrl;
    __Vfunc_inst_is_memop__28__ctrl = 0;
    // Body
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__mem__DOT__state) {
            if (vlSelfRef.top__DOT__mem__DOT__state) {
                vlSelfRef.__Vdly__top__DOT__mem__DOT__state = 0U;
                vlSymsp->TOP__top__DOT__membus.rvalid = 1U;
                vlSymsp->TOP__top__DOT__membus.rdata 
                    = vlSelfRef.top__DOT__mem__DOT__rdata_saved;
            } else {
                vlSelfRef.__Vdly__top__DOT__mem__DOT__state = 0U;
                vlSymsp->TOP__top__DOT__membus.rvalid = 0U;
                vlSymsp->TOP__top__DOT__membus.rdata = 0ULL;
            }
        } else {
            vlSymsp->TOP__top__DOT__membus.rvalid = 
                ((IData)(vlSymsp->TOP__top__DOT__membus.valid) 
                 & (~ (IData)(vlSymsp->TOP__top__DOT__membus.wen)));
            vlSymsp->TOP__top__DOT__membus.rdata = 
                vlSelfRef.top__DOT__mem__DOT__mem[vlSymsp->TOP__top__DOT__membus.addr];
            vlSelfRef.top__DOT__mem__DOT__addr_saved 
                = vlSymsp->TOP__top__DOT__membus.addr;
            if ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))) {
                vlSelfRef.top__DOT__mem__DOT__wdata_saved 
                    = vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata;
                vlSelfRef.top__DOT__mem__DOT__wmask_saved 
                    = vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask;
            } else {
                vlSelfRef.top__DOT__mem__DOT__wdata_saved = 0ULL;
                vlSelfRef.top__DOT__mem__DOT__wmask_saved = 0U;
            }
            vlSelfRef.top__DOT__mem__DOT__rdata_saved 
                = vlSelfRef.top__DOT__mem__DOT__mem
                [vlSymsp->TOP__top__DOT__membus.addr];
            if (((IData)(vlSymsp->TOP__top__DOT__membus.valid) 
                 & (IData)(vlSymsp->TOP__top__DOT__membus.wen))) {
                vlSelfRef.__Vdly__top__DOT__mem__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__top__DOT__mem__DOT__state = 0U;
        vlSymsp->TOP__top__DOT__membus.rvalid = 0U;
        vlSymsp->TOP__top__DOT__membus.rdata = 0ULL;
        vlSelfRef.top__DOT__mem__DOT__addr_saved = 0U;
        vlSelfRef.top__DOT__mem__DOT__wdata_saved = 0ULL;
        vlSelfRef.top__DOT__mem__DOT__wmask_saved = 0U;
        vlSelfRef.top__DOT__mem__DOT__rdata_saved = 0ULL;
    }
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__c__DOT__memq_rvalid) {
            if ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))) {
                if (((IData)(vlSelfRef.top__DOT__c__DOT__mems_is_new) 
                     & ([&]() {
                                __Vfunc_inst_is_memop__26__ctrl 
                                    = (0xffffffU & 
                                       (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                        >> 6U));
                                __Vfunc_inst_is_memop__26__Vfuncout 
                                    = (1U & ((4U == 
                                              (0x3fU 
                                               & (__Vfunc_inst_is_memop__26__ctrl 
                                                  >> 0x12U))) 
                                             | (__Vfunc_inst_is_memop__26__ctrl 
                                                >> 0xbU)));
                            }(), (IData)(__Vfunc_inst_is_memop__26__Vfuncout)))) {
                    __Vfunc_inst_is_store__27__ctrl 
                        = (0xffffffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                        >> 6U));
                    __Vfunc_inst_is_store__27__Vfuncout 
                        = (([&]() {
                                __Vfunc_inst_is_memop__28__ctrl 
                                    = __Vfunc_inst_is_store__27__ctrl;
                                __Vfunc_inst_is_memop__28__Vfuncout 
                                    = (1U & ((4U == 
                                              (0x3fU 
                                               & (__Vfunc_inst_is_memop__28__ctrl 
                                                  >> 0x12U))) 
                                             | (__Vfunc_inst_is_memop__28__ctrl 
                                                >> 0xbU)));
                            }(), (IData)(__Vfunc_inst_is_memop__28__Vfuncout)) 
                           & (~ (__Vfunc_inst_is_store__27__ctrl 
                                 >> 0xbU)));
                    vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state = 1U;
                    vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen 
                        = __Vfunc_inst_is_store__27__Vfuncout;
                    vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr 
                        = (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[8U])) 
                            << 0x3aU) | (((QData)((IData)(
                                                          vlSelfRef.top__DOT__c__DOT__memq_rdata[7U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])) 
                                            >> 6U)));
                    vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata 
                        = ((((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[4U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelfRef.top__DOT__c__DOT__memq_rdata[3U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelfRef.top__DOT__c__DOT__memq_rdata[2U])) 
                                             >> 1U))) 
                           << (0x38U & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                        >> 3U)));
                    vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask 
                        = (0xffU & ((0x4000U & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                     ? ((0x2000U & 
                                         vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                         ? 0xffU : 
                                        ((0U == (7U 
                                                 & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                    >> 6U)))
                                          ? 0xfU : 
                                         ((4U == (7U 
                                                  & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                     >> 6U)))
                                           ? 0xf0U : 0U)))
                                     : ((0x2000U & 
                                         vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                         ? ((6U == 
                                             (7U & 
                                              (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                               >> 6U)))
                                             ? 0xc0U
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                     >> 6U)))
                                                 ? 0x30U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                      >> 6U)))
                                                  ? 0xcU
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                       >> 6U)))
                                                   ? 3U
                                                   : 0U))))
                                         : ((IData)(1U) 
                                            << (7U 
                                                & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                   >> 6U))))));
                }
            } else if ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)))) {
                    vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))) {
                if (vlSymsp->TOP__top__DOT__d_membus.rvalid) {
                    vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state = 0U;
        vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen = 0U;
        vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr = 0ULL;
        vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata = 0ULL;
        vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask = 0U;
    }
    vlSelfRef.top__DOT__mem__DOT__state = vlSelfRef.__Vdly__top__DOT__mem__DOT__state;
    vlSelfRef.top__DOT__c__DOT__memu__DOT__state = vlSelfRef.__Vdly__top__DOT__c__DOT__memu__DOT__state;
    vlSymsp->TOP__top__DOT__membus.wen = ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)) 
                                          && (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen));
    vlSymsp->TOP__top__DOT__i_membus.ready = ((~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)) 
                                              & (1U 
                                                 != (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)));
    vlSymsp->TOP__top__DOT__membus.valid = ((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two) 
                                            | (1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)));
    if ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))) {
        vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__0__addr 
            = vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr;
        vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__0__Vfuncout 
            = (0xffffU & (IData)((vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__0__addr 
                                  >> 3U)));
        vlSymsp->TOP__top__DOT__membus.addr = vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__0__Vfuncout;
    } else {
        vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__1__addr 
            = vlSelfRef.top__DOT__c__DOT__if_pc;
        vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__1__Vfuncout 
            = (0xffffU & (IData)((vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__1__addr 
                                  >> 3U)));
        vlSymsp->TOP__top__DOT__membus.addr = vlSelfRef.__Vfunc_top__DOT__addr_to_memaddr__1__Vfuncout;
    }
    vlSelfRef.top__DOT__c__DOT__mems_is_new = ((IData)(vlSelfRef.rst) 
                                               && ((1U 
                                                    & (~ (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid))) 
                                                   || (1U 
                                                       & (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)))));
    if (vlSelfRef.rst) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__c__DOT__control_hazard)))) {
            if (((IData)(vlSelfRef.top__DOT__c__DOT__memq_wready) 
                 & (IData)(vlSelfRef.top__DOT__c__DOT__memq_wvalid))) {
                vlSelfRef.top__DOT__c__DOT__memq_rdata[0U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[0U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[1U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[1U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[2U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[2U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[3U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[3U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[4U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[4U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[5U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[5U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[6U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[7U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[7U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[8U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[8U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[9U] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[9U];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[0xaU];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[0xbU];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[0xcU];
                vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU] 
                    = vlSelfRef.top__DOT__c__DOT__memq_wdata[0xdU];
            }
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__memq_rdata[0U] 
            = Vtop__ConstPool__CONST_h6a292389_0[0U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[1U] 
            = Vtop__ConstPool__CONST_h6a292389_0[1U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[2U] 
            = Vtop__ConstPool__CONST_h6a292389_0[2U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[3U] 
            = Vtop__ConstPool__CONST_h6a292389_0[3U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[4U] 
            = Vtop__ConstPool__CONST_h6a292389_0[4U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[5U] 
            = Vtop__ConstPool__CONST_h6a292389_0[5U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
            = Vtop__ConstPool__CONST_h6a292389_0[6U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[7U] 
            = Vtop__ConstPool__CONST_h6a292389_0[7U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[8U] 
            = Vtop__ConstPool__CONST_h6a292389_0[8U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[9U] 
            = Vtop__ConstPool__CONST_h6a292389_0[9U];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
            = Vtop__ConstPool__CONST_h6a292389_0[0xaU];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
            = Vtop__ConstPool__CONST_h6a292389_0[0xbU];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[0xcU] 
            = Vtop__ConstPool__CONST_h6a292389_0[0xcU];
        vlSelfRef.top__DOT__c__DOT__memq_rdata[0xdU] 
            = Vtop__ConstPool__CONST_h6a292389_0[0xdU];
    }
    if ((1U & (~ VL_ONEHOT_I((((0x342U == (0xfffU & 
                                           (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                            >> 0x12U))) 
                               << 2U) | (((0x341U == 
                                           (0xfffU 
                                            & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                               >> 0x12U))) 
                                          << 1U) | 
                                         (0x305U == 
                                          (0xfffU & 
                                           (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                            >> 0x12U))))))))) {
        if ((0U != (((0x342U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                           >> 0x12U))) 
                     << 2U) | (((0x341U == (0xfffU 
                                            & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                               >> 0x12U))) 
                                << 1U) | (0x305U == 
                                          (0xfffU & 
                                           (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                            >> 0x12U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: csrunit.sv:54: Assertion failed in %Ntop.c.csru: unique case, but multiple matches found for '12'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),12,
                             (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                        >> 0x12U)));
                VL_STOP_MT("src/csrunit.sv", 54, "");
            }
        }
    }
    if (vlSelfRef.rst) {
        if (vlSelfRef.top__DOT__c__DOT__control_hazard) {
            vlSelfRef.top__DOT__c__DOT__memq_rvalid = 0U;
        } else if (((IData)(vlSelfRef.top__DOT__c__DOT__memq_wready) 
                    & (IData)(vlSelfRef.top__DOT__c__DOT__memq_wvalid))) {
            vlSelfRef.top__DOT__c__DOT__memq_rvalid = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)))) {
            vlSelfRef.top__DOT__c__DOT__memq_rvalid = 0U;
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__memq_rvalid = 0U;
    }
    vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1 
        = (((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
             >> 0xfU) & (0U != (3U & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                      >> 0xdU)))) ? (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                                        >> 1U))))
            : (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])) 
                << 0x3fU) | (((QData)((IData)(vlSelfRef.top__DOT__c__DOT__memq_rdata[5U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelfRef.top__DOT__c__DOT__memq_rdata[4U])) 
                                           >> 1U))));
    vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data = 0ULL;
    top__DOT__c__DOT__csru__DOT__csr_wmask = 0ULL;
    if ((0x305U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                              >> 0x12U)))) {
        vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
            = vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec;
        top__DOT__c__DOT__csru__DOT__csr_wmask = 0xfffffffffffffffcULL;
    } else if ((0x341U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                     >> 0x12U)))) {
        vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
            = vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc;
        top__DOT__c__DOT__csru__DOT__csr_wmask = 0xfffffffffffffffcULL;
    } else if ((0x342U == (0xfffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                     >> 0x12U)))) {
        vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
            = vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause;
        top__DOT__c__DOT__csru__DOT__csr_wmask = 0xffffffffffffffffULL;
    }
    top__DOT__c__DOT__csru__DOT__wdata_raw = ((0x4000U 
                                               & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                               ? ((0x2000U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                                   ? 
                                                  (vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
                                                   & (~ vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))
                                                   : 
                                                  (vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
                                                   | vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))
                                               : ((0x2000U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                                   ? vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1
                                                   : vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data));
    vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked 
        = ((top__DOT__c__DOT__csru__DOT__wdata_raw 
            & top__DOT__c__DOT__csru__DOT__csr_wmask) 
           | (vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data 
              & (~ top__DOT__c__DOT__csru__DOT__csr_wmask)));
    __VdfgRegularize_hb1f32181_0_0 = ((0U == (0x1fU 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))) 
                                      & (IData)(((0U 
                                                  == 
                                                  (0xe000U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])) 
                                                 & (0U 
                                                    == 
                                                    (0x3e0U 
                                                     & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])))));
    vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
           & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
               >> 0x10U) & (IData)(((0U == (0x3ffc0000U 
                                            & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])) 
                                    & (IData)(__VdfgRegularize_hb1f32181_0_0)))));
    vlSelfRef.top__DOT__c__DOT__exs_mem_data_hazard 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
           & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
               >> 0x17U) & (((0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                                      >> 5U))) 
                            | ((0x1fU & (vlSelfRef.top__DOT__c__DOT__exq_rdata[3U] 
                                         >> 0xcU)) 
                               == (0x1fU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU] 
                                            >> 5U))))));
    vlSelfRef.top__DOT__c__DOT__csru_trap_vector = 
        ((IData)(vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt)
          ? vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec
          : vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc);
    vlSelfRef.top__DOT__c__DOT__csru_raise_trap = ((IData)(vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt) 
                                                   | ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
                                                      & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                                          >> 0x10U) 
                                                         & (IData)(
                                                                   ((0xc080000U 
                                                                     == 
                                                                     (0x3ffc0000U 
                                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])) 
                                                                    & (IData)(__VdfgRegularize_hb1f32181_0_0))))));
    vlSelfRef.top__DOT__c__DOT__exs_data_hazard = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_mem_data_hazard) 
                                                   | (IData)(vlSelfRef.top__DOT__c__DOT__exs_wb_data_hazard));
    vlSelfRef.top__DOT__c__DOT__control_hazard = ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
                                                  & ((IData)(vlSelfRef.top__DOT__c__DOT__csru_raise_trap) 
                                                     | ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                                         >> 0x12U) 
                                                        | vlSelfRef.top__DOT__c__DOT__memq_rdata[2U])));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ top__DOT__c__DOT__memu__DOT__D;
    top__DOT__c__DOT__memu__DOT__D = 0;
    CData/*0:0*/ top__DOT__c__DOT__memu__DOT__sext;
    top__DOT__c__DOT__memu__DOT__sext = 0;
    // Body
    top__DOT__c__DOT__memu__DOT__D = vlSymsp->TOP__top__DOT__membus.rdata;
    top__DOT__c__DOT__memu__DOT__sext = (1U & (~ (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                                  >> 0xfU)));
    vlSelfRef.top__DOT__c__DOT__memu_rdata = ((0x4000U 
                                               & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                               ? ((0x2000U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                                   ? top__DOT__c__DOT__memu__DOT__D
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                        >> 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                                & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(top__DOT__c__DOT__memu__DOT__D)))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top__DOT__c__DOT__memq_rdata[6U] 
                                                         >> 6U)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                                & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x3fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (top__DOT__c__DOT__memu__DOT__D 
                                                                        >> 0x20U))))
                                                     : 0ULL)))
                                               : ((0x2000U 
                                                   & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 0ULL
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x3fU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x30U)))))))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 0ULL
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x2fU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x20U))))))))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 0ULL
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x1fU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x10U)))))))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 0ULL
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0xfU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(top__DOT__c__DOT__memu__DOT__D))))))))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                    ? 
                                                   ((0x80U 
                                                     & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x3fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x38U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x37U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x30U)))))))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x2fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x28U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x27U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x20U))))))))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                     ? 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x1fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x18U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x17U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0x10U)))))))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelfRef.top__DOT__c__DOT__memq_rdata[6U])
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 0xfU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 8U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          ((IData)(top__DOT__c__DOT__memu__DOT__sext) 
                                                                           & (IData)(
                                                                                (top__DOT__c__DOT__memu__DOT__D 
                                                                                >> 7U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(top__DOT__c__DOT__memu__DOT__D))))))))));
    vlSymsp->TOP__top__DOT__i_membus.rvalid = ((IData)(vlSymsp->TOP__top__DOT__membus.rvalid) 
                                               & (IData)(vlSelfRef.top__DOT__memarb_last_i));
    vlSymsp->TOP__top__DOT__d_membus.rvalid = ((IData)(vlSymsp->TOP__top__DOT__membus.rvalid) 
                                               & (~ (IData)(vlSelfRef.top__DOT__memarb_last_i)));
    vlSelfRef.top__DOT__c__DOT__memu_stall = ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                               ? ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
                                                  & ((IData)(vlSelfRef.top__DOT__c__DOT__mems_is_new) 
                                                     & ([&]() {
                        vlSelfRef.__Vfunc_inst_is_memop__25__ctrl 
                            = (0xffffffU & (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                            >> 6U));
                        vlSelfRef.__Vfunc_inst_is_memop__25__Vfuncout 
                            = (1U & ((4U == (0x3fU 
                                             & (vlSelfRef.__Vfunc_inst_is_memop__25__ctrl 
                                                >> 0x12U))) 
                                     | (vlSelfRef.__Vfunc_inst_is_memop__25__ctrl 
                                        >> 0xbU)));
                    }(), (IData)(vlSelfRef.__Vfunc_inst_is_memop__25__Vfuncout))))
                                               : ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                                   ? (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)) 
                                                   && ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
                                                       & (~ (IData)(vlSymsp->TOP__top__DOT__d_membus.rvalid))))));
    vlSelfRef.top__DOT__c__DOT__wbq_wvalid = ((~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)) 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid));
    vlSelfRef.top__DOT__c__DOT__memq_wready = (1U & 
                                               ((~ (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid)) 
                                                | (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall))));
}
