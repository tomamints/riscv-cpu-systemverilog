// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop_svutil____Vdpiimwrap_get_env_value_TOP__svutil(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string key, std::string &get_env_value__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string top__DOT__mem__DOT__unnamedblk1__DOT__init_filepath;
    std::string __Vfunc_get_env__2__Vfuncout;
    std::string __Vfunc_get_env__3__Vfuncout;
    std::string __Vfunc_get_env_value__4__Vfuncout;
    // Body
    Vtop_svutil____Vdpiimwrap_get_env_value_TOP__svutil(
                                                        (&(vlSymsp->__Vscope_svutil)), 
                                                        "src/util.sv", 7U, 
                                                        std::string{"MEMORY_FILE_PATH"}, __Vfunc_get_env_value__4__Vfuncout);
    __Vfunc_get_env__3__Vfuncout = __Vfunc_get_env_value__4__Vfuncout;
    __Vfunc_get_env__2__Vfuncout = __Vfunc_get_env__3__Vfuncout;
    top__DOT__mem__DOT__unnamedblk1__DOT__init_filepath 
        = __Vfunc_get_env__2__Vfuncout;
    if (VL_UNLIKELY(((std::string{} != top__DOT__mem__DOT__unnamedblk1__DOT__init_filepath)))) {
        VL_WRITEF_NX("memory: initializing from %0@\n",0,
                     -1,&(top__DOT__mem__DOT__unnamedblk1__DOT__init_filepath));
        VL_READMEM_N(true, 64, 65536, 0, VL_CVT_PACK_STR_NN(top__DOT__mem__DOT__unnamedblk1__DOT__init_filepath)
                     ,  &(vlSelfRef.top__DOT__mem__DOT__mem)
                     , 0, ~0ULL);
    } else {
        VL_WRITEF_NX("memory: no initialization file specified\n",0);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h7ef2948f_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1;
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1 = 0;
    CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2;
    top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2 = 0;
    QData/*63:0*/ top__DOT__c__DOT__alum__DOT__add;
    top__DOT__c__DOT__alum__DOT__add = 0;
    QData/*63:0*/ top__DOT__c__DOT__memu__DOT__D;
    top__DOT__c__DOT__memu__DOT__D = 0;
    CData/*0:0*/ top__DOT__c__DOT__memu__DOT__sext;
    top__DOT__c__DOT__memu__DOT__sext = 0;
    QData/*63:0*/ top__DOT__c__DOT__csru__DOT__csr_wmask;
    top__DOT__c__DOT__csru__DOT__csr_wmask = 0;
    QData/*63:0*/ top__DOT__c__DOT__csru__DOT__wdata_raw;
    top__DOT__c__DOT__csru__DOT__wdata_raw = 0;
    CData/*0:0*/ __VdfgRegularize_hb1f32181_0_0;
    __VdfgRegularize_hb1f32181_0_0 = 0;
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
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_6;
    __VdfgRegularize_h9a3b41c9_0_6 = 0;
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_7;
    __VdfgRegularize_h9a3b41c9_0_7 = 0;
    QData/*63:0*/ __VdfgRegularize_h9a3b41c9_0_8;
    __VdfgRegularize_h9a3b41c9_0_8 = 0;
    // Body
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
    vlSelfRef.top__DOT__c__DOT__if_pc_next = (4ULL 
                                              + vlSelfRef.top__DOT__c__DOT__if_pc);
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
    vlSymsp->TOP__top__DOT__i_membus.rvalid = ((IData)(vlSymsp->TOP__top__DOT__membus.rvalid) 
                                               & (IData)(vlSelfRef.top__DOT__memarb_last_i));
    vlSymsp->TOP__top__DOT__membus.wen = ((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)) 
                                          && (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen));
    vlSymsp->TOP__top__DOT__i_membus.ready = ((~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)) 
                                              & (1U 
                                                 != (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)));
    vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid = ((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head) 
                                                  != (IData)(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail));
    vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1 
        = (1U & ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state))
                  ? (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                     >> 9U) : ((IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__funct3_saved) 
                               >> 2U)));
    top__DOT__c__DOT__memu__DOT__D = vlSymsp->TOP__top__DOT__membus.rdata;
    top__DOT__c__DOT__memu__DOT__sext = (1U & (~ (vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                                  >> 0xfU)));
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
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall = 
        (1U & ((~ ((2U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)) 
                   | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_rvalided))) 
               & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
                  >> 0xeU)));
    vlSymsp->TOP__top__DOT__d_membus.rvalid = ((IData)(vlSymsp->TOP__top__DOT__membus.rvalid) 
                                               & (~ (IData)(vlSelfRef.top__DOT__memarb_last_i)));
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
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][0U];
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[1U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][1U];
    vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[2U] = 
        vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
        [vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head][2U];
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
    vlSymsp->TOP__top__DOT__membus.valid = ((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two) 
                                            | (1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state)));
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
    vlSelfRef.top__DOT__c__DOT__exs_data_hazard = ((IData)(vlSelfRef.top__DOT__c__DOT__exs_mem_data_hazard) 
                                                   | (IData)(vlSelfRef.top__DOT__c__DOT__exs_wb_data_hazard));
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
    vlSelfRef.top__DOT__c__DOT__wbq_wvalid = ((~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)) 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid));
    vlSelfRef.top__DOT__c__DOT__memq_wready = (1U & 
                                               ((~ (IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid)) 
                                                | (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall))));
    vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid = 
        ((IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid) 
         & ((~ ((IData)(vlSelfRef.top__DOT__c__DOT__exs_data_hazard) 
                | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_is_requested))) 
            & (vlSelfRef.top__DOT__c__DOT__exq_rdata[2U] 
               >> 0xeU)));
    __VdfgRegularize_h038a369a_0_0 = (1U & (~ ((IData)(vlSelfRef.top__DOT__c__DOT__exs_data_hazard) 
                                               | (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_stall))));
    __VdfgRegularize_h9a3b41c9_0_8 = ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                       ? 0ULL : __VdfgRegularize_h9a3b41c9_0_6);
    vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt 
        = ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
           & ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
               >> 0x10U) & (IData)(((0U == (0x3ffc0000U 
                                            & vlSelfRef.top__DOT__c__DOT__memq_rdata[0xbU])) 
                                    & (IData)(__VdfgRegularize_hb1f32181_0_0)))));
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
            } else if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                        if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                            vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                                = (0x820000U | (0x1ffffU 
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
                } else {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
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
            } else {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = ((0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                       | (((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                            ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                ? 8U : 0U) : 0U) << 0x12U));
            }
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
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
            } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                    = ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                        ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                            ? (0x430000U | (0xffffU 
                                            & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                            : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                        : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
            } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = (0x60000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
                    vlSelfRef.top__DOT__c__DOT__ids_ctrl 
                        = ((0xff3fffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                           | (0x8000U | ((1U == (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
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
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                ((0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl) 
                 | (((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                      ? 0U : ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                               ? 0U : ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                        ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                            ? 4U : 0U)
                                        : 0U))) << 0x12U));
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
        } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                  ? ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                      ? (0x420000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                      : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl))
                  : (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
        } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
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
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        }
    } else if ((8U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        vlSelfRef.top__DOT__c__DOT__ids_ctrl = (0x3ffffU 
                                                & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
    } else if ((4U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        vlSelfRef.top__DOT__c__DOT__ids_ctrl = (0x3ffffU 
                                                & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
    } else if ((2U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
        if ((1U & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])) {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0xa0000U | (0x1ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl));
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x800U | vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        } else {
            vlSelfRef.top__DOT__c__DOT__ids_ctrl = 
                (0x3ffffU & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
        }
    } else {
        vlSelfRef.top__DOT__c__DOT__ids_ctrl = (0x3ffffU 
                                                & vlSelfRef.top__DOT__c__DOT__ids_ctrl);
    }
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
    vlSelfRef.top__DOT__c__DOT__ids_imm = ((0x40U & 
                                            vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                            ? ((0x20U 
                                                & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                ? (
                                                   (0x10U 
                                                    & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                     ? 
                                                    ((4U 
                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                      ? 
                                                     ((2U 
                                                       & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                       ? 
                                                      ((1U 
                                                        & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                             >> 0x1fU)))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
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
                                                                                >> 0x14U))))))
                                                        : 0ULL)
                                                       : 0ULL)
                                                      : 0ULL)
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                      ? __VdfgRegularize_h9a3b41c9_0_6
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
                                                         << 0xdU) 
                                                        | (QData)((IData)(
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
                                                        : 0ULL)
                                                       : 0ULL))))
                                                : 0ULL)
                                            : ((0x20U 
                                                & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                ? (
                                                   (0x10U 
                                                    & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                      ? __VdfgRegularize_h9a3b41c9_0_7
                                                      : 0ULL))
                                                    : 
                                                   ((8U 
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
                                                       : 0ULL))))
                                                : (
                                                   (0x10U 
                                                    & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                     ? __VdfgRegularize_h9a3b41c9_0_8
                                                     : 
                                                    ((4U 
                                                      & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                      ? __VdfgRegularize_h9a3b41c9_0_7
                                                      : __VdfgRegularize_h9a3b41c9_0_6))
                                                    : 
                                                   ((8U 
                                                     & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])
                                                     ? 0ULL
                                                     : __VdfgRegularize_h9a3b41c9_0_8))));
    top__DOT__c__DOT__alum__DOT__add = (vlSelfRef.top__DOT__c__DOT__exs_op1 
                                        + vlSelfRef.top__DOT__c__DOT__exs_op2);
    vlSelfRef.top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0 
        = ((0U == (IData)(vlSelfRef.top__DOT__c__DOT__mdu__DOT__state)) 
           & (IData)(vlSelfRef.top__DOT__c__DOT__exs_muldiv_valid));
    vlSelfRef.top__DOT__c__DOT__memq_wvalid = ((IData)(__VdfgRegularize_h038a369a_0_0) 
                                               & (IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid));
    vlSelfRef.top__DOT__c__DOT__exq_rready = ((IData)(__VdfgRegularize_h038a369a_0_0) 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__memq_wready));
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
    vlSelfRef.top__DOT__c__DOT__if_fifo_rready = (1U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__c__DOT__exq_rvalid)) 
                                                     | (IData)(vlSelfRef.top__DOT__c__DOT__exq_rready)));
    vlSelfRef.top__DOT__c__DOT__control_hazard = ((IData)(vlSelfRef.top__DOT__c__DOT__memq_rvalid) 
                                                  & ((IData)(vlSelfRef.top__DOT__c__DOT__csru_raise_trap) 
                                                     | ((vlSelfRef.top__DOT__c__DOT__memq_rdata[0xaU] 
                                                         >> 0x12U) 
                                                        | vlSelfRef.top__DOT__c__DOT__memq_rdata[2U])));
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
