// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__memarb_last_i));
        bufp->chgQData(oldp+1,(vlSelfRef.top__DOT__memarb_last_iaddr),64);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__c__DOT__if_fifo_wready));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid));
        bufp->chgWData(oldp+6,(vlSelfRef.top__DOT__c__DOT__if_fifo_wdata),96);
        bufp->chgQData(oldp+9,(vlSelfRef.top__DOT__c__DOT__if_pc),64);
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__c__DOT__if_is_requested));
        bufp->chgQData(oldp+12,(vlSelfRef.top__DOT__c__DOT__if_pc_requested),64);
        bufp->chgQData(oldp+14,((4ULL + vlSelfRef.top__DOT__c__DOT__if_pc)),64);
        bufp->chgQData(oldp+16,(vlSelfRef.top__DOT__c__DOT__clock_count),64);
        bufp->chgQData(oldp+18,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec),64);
        bufp->chgQData(oldp+20,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc),64);
        bufp->chgQData(oldp+22,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause),64);
        bufp->chgCData(oldp+24,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head),3);
        bufp->chgCData(oldp+25,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail),3);
        bufp->chgWData(oldp+26,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [0U]),96);
        bufp->chgWData(oldp+29,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [1U]),96);
        bufp->chgWData(oldp+32,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [2U]),96);
        bufp->chgWData(oldp+35,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [3U]),96);
        bufp->chgWData(oldp+38,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [4U]),96);
        bufp->chgWData(oldp+41,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [5U]),96);
        bufp->chgWData(oldp+44,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [6U]),96);
        bufp->chgWData(oldp+47,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                                [7U]),96);
        bufp->chgCData(oldp+50,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1),3);
        bufp->chgCData(oldp+51,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+52,(vlSelfRef.top__DOT__c__DOT__regfile[0]),64);
        bufp->chgQData(oldp+54,(vlSelfRef.top__DOT__c__DOT__regfile[1]),64);
        bufp->chgQData(oldp+56,(vlSelfRef.top__DOT__c__DOT__regfile[2]),64);
        bufp->chgQData(oldp+58,(vlSelfRef.top__DOT__c__DOT__regfile[3]),64);
        bufp->chgQData(oldp+60,(vlSelfRef.top__DOT__c__DOT__regfile[4]),64);
        bufp->chgQData(oldp+62,(vlSelfRef.top__DOT__c__DOT__regfile[5]),64);
        bufp->chgQData(oldp+64,(vlSelfRef.top__DOT__c__DOT__regfile[6]),64);
        bufp->chgQData(oldp+66,(vlSelfRef.top__DOT__c__DOT__regfile[7]),64);
        bufp->chgQData(oldp+68,(vlSelfRef.top__DOT__c__DOT__regfile[8]),64);
        bufp->chgQData(oldp+70,(vlSelfRef.top__DOT__c__DOT__regfile[9]),64);
        bufp->chgQData(oldp+72,(vlSelfRef.top__DOT__c__DOT__regfile[10]),64);
        bufp->chgQData(oldp+74,(vlSelfRef.top__DOT__c__DOT__regfile[11]),64);
        bufp->chgQData(oldp+76,(vlSelfRef.top__DOT__c__DOT__regfile[12]),64);
        bufp->chgQData(oldp+78,(vlSelfRef.top__DOT__c__DOT__regfile[13]),64);
        bufp->chgQData(oldp+80,(vlSelfRef.top__DOT__c__DOT__regfile[14]),64);
        bufp->chgQData(oldp+82,(vlSelfRef.top__DOT__c__DOT__regfile[15]),64);
        bufp->chgQData(oldp+84,(vlSelfRef.top__DOT__c__DOT__regfile[16]),64);
        bufp->chgQData(oldp+86,(vlSelfRef.top__DOT__c__DOT__regfile[17]),64);
        bufp->chgQData(oldp+88,(vlSelfRef.top__DOT__c__DOT__regfile[18]),64);
        bufp->chgQData(oldp+90,(vlSelfRef.top__DOT__c__DOT__regfile[19]),64);
        bufp->chgQData(oldp+92,(vlSelfRef.top__DOT__c__DOT__regfile[20]),64);
        bufp->chgQData(oldp+94,(vlSelfRef.top__DOT__c__DOT__regfile[21]),64);
        bufp->chgQData(oldp+96,(vlSelfRef.top__DOT__c__DOT__regfile[22]),64);
        bufp->chgQData(oldp+98,(vlSelfRef.top__DOT__c__DOT__regfile[23]),64);
        bufp->chgQData(oldp+100,(vlSelfRef.top__DOT__c__DOT__regfile[24]),64);
        bufp->chgQData(oldp+102,(vlSelfRef.top__DOT__c__DOT__regfile[25]),64);
        bufp->chgQData(oldp+104,(vlSelfRef.top__DOT__c__DOT__regfile[26]),64);
        bufp->chgQData(oldp+106,(vlSelfRef.top__DOT__c__DOT__regfile[27]),64);
        bufp->chgQData(oldp+108,(vlSelfRef.top__DOT__c__DOT__regfile[28]),64);
        bufp->chgQData(oldp+110,(vlSelfRef.top__DOT__c__DOT__regfile[29]),64);
        bufp->chgQData(oldp+112,(vlSelfRef.top__DOT__c__DOT__regfile[30]),64);
        bufp->chgQData(oldp+114,(vlSelfRef.top__DOT__c__DOT__regfile[31]),64);
        bufp->chgQData(oldp+116,(vlSelfRef.top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)))));
        bufp->chgBit(oldp+119,(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid));
        bufp->chgWData(oldp+120,(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata),96);
        bufp->chgBit(oldp+123,(vlSelfRef.top__DOT__c__DOT__control_hazard));
        bufp->chgQData(oldp+124,(vlSelfRef.top__DOT__c__DOT__control_hazard_pc_next),64);
        bufp->chgBit(oldp+126,(vlSelfRef.top__DOT__c__DOT__inst_is_new));
        bufp->chgQData(oldp+127,((((QData)((IData)(
                                                   vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[1U])))),64);
        bufp->chgIData(oldp+129,(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__c__DOT__inst_ctrl),23);
        bufp->chgQData(oldp+131,(vlSelfRef.top__DOT__c__DOT__inst_imm),64);
        bufp->chgCData(oldp+133,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+134,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+135,(vlSelfRef.top__DOT__c__DOT__rs1_data),64);
        bufp->chgQData(oldp+137,(vlSelfRef.top__DOT__c__DOT__rs2_data),64);
        bufp->chgQData(oldp+139,(vlSelfRef.top__DOT__c__DOT__op1),64);
        bufp->chgQData(oldp+141,(vlSelfRef.top__DOT__c__DOT__op2),64);
        bufp->chgQData(oldp+143,(vlSelfRef.top__DOT__c__DOT__alu_result),64);
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__c__DOT__brunit_take));
        bufp->chgQData(oldp+146,(vlSelfRef.top__DOT__c__DOT__memu_rdata),64);
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__c__DOT__memu_stall));
        bufp->chgCData(oldp+149,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                           >> 7U))),5);
        bufp->chgQData(oldp+150,(vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data),64);
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__c__DOT__csru_raise_trap));
        bufp->chgQData(oldp+153,(vlSelfRef.top__DOT__c__DOT__csru_trap_vector),64);
        bufp->chgQData(oldp+155,(vlSelfRef.top__DOT__c__DOT__wb_data),64);
        bufp->chgQData(oldp+157,(vlSelfRef.top__DOT__c__DOT__alum__DOT__add),64);
        bufp->chgQData(oldp+159,((vlSelfRef.top__DOT__c__DOT__op1 
                                  - vlSelfRef.top__DOT__c__DOT__op2)),64);
        bufp->chgQData(oldp+161,((vlSelfRef.top__DOT__c__DOT__op1 
                                  << (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
        bufp->chgQData(oldp+163,((vlSelfRef.top__DOT__c__DOT__op1 
                                  >> (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
        bufp->chgQData(oldp+165,((QData)((IData)(VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__op1, vlSelfRef.top__DOT__c__DOT__op2)))),64);
        bufp->chgQData(oldp+167,((QData)((IData)((vlSelfRef.top__DOT__c__DOT__op1 
                                                  < vlSelfRef.top__DOT__c__DOT__op2)))),64);
        bufp->chgIData(oldp+169,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                                  + (IData)(vlSelfRef.top__DOT__c__DOT__op2))),32);
        bufp->chgIData(oldp+170,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                                  - (IData)(vlSelfRef.top__DOT__c__DOT__op2))),32);
        bufp->chgIData(oldp+171,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                                  << (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
        bufp->chgIData(oldp+172,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                                  >> (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
        bufp->chgQData(oldp+173,(VL_SHIFTRS_QQI(64,64,6, vlSelfRef.top__DOT__c__DOT__op1, 
                                                (0x3fU 
                                                 & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
        bufp->chgIData(oldp+175,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelfRef.top__DOT__c__DOT__op1), 
                                                (0x1fU 
                                                 & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
        bufp->chgCData(oldp+176,((7U & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                        >> 7U))),3);
        bufp->chgBit(oldp+177,((vlSelfRef.top__DOT__c__DOT__op1 
                                == vlSelfRef.top__DOT__c__DOT__op2)));
        bufp->chgBit(oldp+178,(VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__op1, vlSelfRef.top__DOT__c__DOT__op2)));
        bufp->chgBit(oldp+179,((vlSelfRef.top__DOT__c__DOT__op1 
                                < vlSelfRef.top__DOT__c__DOT__op2)));
        bufp->chgSData(oldp+180,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+181,(vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1),64);
        bufp->chgBit(oldp+183,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                 >> 0xaU) & (0U != 
                                             (7U & 
                                              (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                               >> 7U))))));
        bufp->chgBit(oldp+184,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                 >> 0xaU) & (1U != 
                                             (3U & 
                                              (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                               >> 7U))))));
        bufp->chgBit(oldp+185,((0ULL == vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1)));
        bufp->chgBit(oldp+186,((((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid) 
                                 & ((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                     >> 0xaU) & (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                     >> 7U))))) 
                                & (~ (((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                        >> 0xaU) & 
                                       (1U != (3U & 
                                               (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                >> 7U)))) 
                                      & (0ULL == vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))))));
        bufp->chgBit(oldp+187,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                 >> 0xaU) & ((0U == 
                                              (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 0x14U)) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hb1f32181_0_0)))));
        bufp->chgBit(oldp+188,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                 >> 0xaU) & ((0x302U 
                                              == (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                  >> 0x14U)) 
                                             & (IData)(vlSelfRef.__VdfgRegularize_hb1f32181_0_0)))));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt));
        bufp->chgQData(oldp+190,(vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_wmask),64);
        bufp->chgQData(oldp+192,(vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_raw),64);
        bufp->chgQData(oldp+194,(vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked),64);
        bufp->chgSData(oldp+196,(((0xfe0U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+197,((((0x800U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                              >> 0x14U)) 
                                   | (0x400U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                << 3U))) 
                                  | ((0x3f0U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                >> 8U))))),12);
        bufp->chgIData(oldp+198,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+199,(((0x80000U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                  >> 1U)) 
                                     | ((0x400U & (
                                                   vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                            >> 0x15U)))))),20);
        bufp->chgQData(oldp+200,((((- (QData)((IData)(
                                                      (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                       >> 0x1fU)))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                               >> 0x14U))))),64);
        bufp->chgQData(oldp+202,((((- (QData)((IData)(
                                                      (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                       >> 0x1fU)))) 
                                   << 0xcU) | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                     >> 7U))))))),64);
        bufp->chgQData(oldp+204,((((- (QData)((IData)(
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
                                                                        >> 7U)))))))),64);
        bufp->chgQData(oldp+206,((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]))))),64);
        bufp->chgQData(oldp+208,((((- (QData)((IData)(
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
                                                                      >> 0x14U))))))),64);
        bufp->chgCData(oldp+210,((0x7fU & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])),7);
        bufp->chgCData(oldp+211,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+212,((7U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+213,(vlSelfRef.top__DOT__c__DOT__memu__DOT__state),2);
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen));
        bufp->chgQData(oldp+215,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr),64);
        bufp->chgQData(oldp+217,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata),64);
        bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask),8);
        bufp->chgQData(oldp+220,(vlSelfRef.top__DOT__c__DOT__memu__DOT__D),64);
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__c__DOT__memu__DOT__sext));
        bufp->chgBit(oldp+223,(vlSelfRef.top__DOT__mem__DOT__state));
        bufp->chgSData(oldp+224,(vlSelfRef.top__DOT__mem__DOT__addr_saved),16);
        bufp->chgQData(oldp+225,(vlSelfRef.top__DOT__mem__DOT__wdata_saved),64);
        bufp->chgCData(oldp+227,(vlSelfRef.top__DOT__mem__DOT__wmask_saved),8);
        bufp->chgQData(oldp+228,(vlSelfRef.top__DOT__mem__DOT__rdata_saved),64);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__top__DOT__membus.valid));
        bufp->chgBit(oldp+231,((1U & (~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)))));
        bufp->chgSData(oldp+232,(vlSymsp->TOP__top__DOT__membus.addr),16);
        bufp->chgBit(oldp+233,(vlSymsp->TOP__top__DOT__membus.wen));
        bufp->chgQData(oldp+234,(((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                   ? vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata
                                   : 0ULL)),64);
        bufp->chgCData(oldp+236,(((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                   ? (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask)
                                   : 0U)),8);
        bufp->chgBit(oldp+237,(vlSymsp->TOP__top__DOT__membus.rvalid));
        bufp->chgQData(oldp+238,(vlSymsp->TOP__top__DOT__membus.rdata),64);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top__DOT__i_membus.ready));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__top__DOT__i_membus.rvalid));
        bufp->chgBit(oldp+242,((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__top__DOT__d_membus.rvalid));
    }
    bufp->chgBit(oldp+244,(vlSelfRef.test_success));
    bufp->chgBit(oldp+245,(vlSelfRef.clk));
    bufp->chgBit(oldp+246,(vlSelfRef.rst));
    bufp->chgIData(oldp+247,(((1U & (IData)((vlSelfRef.top__DOT__memarb_last_iaddr 
                                             >> 2U)))
                               ? (IData)((vlSymsp->TOP__top__DOT__membus.rdata 
                                          >> 0x20U))
                               : (IData)(vlSymsp->TOP__top__DOT__membus.rdata))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
