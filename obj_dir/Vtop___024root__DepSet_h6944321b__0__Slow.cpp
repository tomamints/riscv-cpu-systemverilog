// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->test_success = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13009553937811696954ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->top__DOT__memarb_last_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9020432255251544776ull);
    vlSelf->top__DOT__memarb_last_iaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 834856577861990649ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13463627268042975091ull);
    }
    vlSelf->top__DOT__mem__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1454253203973318151ull);
    vlSelf->top__DOT__mem__DOT__addr_saved = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1389585716888563030ull);
    vlSelf->top__DOT__mem__DOT__wdata_saved = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8789670056568657683ull);
    vlSelf->top__DOT__mem__DOT__wmask_saved = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11205488010486128654ull);
    vlSelf->top__DOT__mem__DOT__rdata_saved = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14340344277714012001ull);
    vlSelf->top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9633493691962861462ull);
    vlSelf->top__DOT__c__DOT__if_fifo_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10715715541641269326ull);
    vlSelf->top__DOT__c__DOT__if_fifo_wready_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8288426897961396821ull);
    vlSelf->top__DOT__c__DOT__if_fifo_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2185576721253422659ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->top__DOT__c__DOT__if_fifo_wdata, __VscopeHash, 5559175574239860942ull);
    vlSelf->top__DOT__c__DOT__if_fifo_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957690666225508764ull);
    vlSelf->top__DOT__c__DOT__if_fifo_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9359269979303463574ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->top__DOT__c__DOT__if_fifo_rdata, __VscopeHash, 6210605730922879560ull);
    vlSelf->top__DOT__c__DOT__exq_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124461744300164772ull);
    vlSelf->top__DOT__c__DOT__exq_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482014734974583386ull);
    VL_SCOPED_RAND_RESET_W(184, vlSelf->top__DOT__c__DOT__exq_rdata, __VscopeHash, 9300171917627022480ull);
    vlSelf->top__DOT__c__DOT__memq_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4799168630942037670ull);
    vlSelf->top__DOT__c__DOT__memq_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1125639381665642163ull);
    VL_SCOPED_RAND_RESET_W(446, vlSelf->top__DOT__c__DOT__memq_wdata, __VscopeHash, 13502106192895949268ull);
    vlSelf->top__DOT__c__DOT__memq_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223050230674021990ull);
    VL_SCOPED_RAND_RESET_W(446, vlSelf->top__DOT__c__DOT__memq_rdata, __VscopeHash, 691243506016729960ull);
    vlSelf->top__DOT__c__DOT__wbq_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10401623558530028280ull);
    vlSelf->top__DOT__c__DOT__wbq_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9044633436465434303ull);
    VL_SCOPED_RAND_RESET_W(376, vlSelf->top__DOT__c__DOT__wbq_rdata, __VscopeHash, 16921000626199488939ull);
    vlSelf->top__DOT__c__DOT__if_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3871675512076945368ull);
    vlSelf->top__DOT__c__DOT__if_is_requested = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 543213904942853209ull);
    vlSelf->top__DOT__c__DOT__if_pc_requested = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10052607677150246492ull);
    vlSelf->top__DOT__c__DOT__if_pc_next = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14513914775454724443ull);
    vlSelf->top__DOT__c__DOT__control_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7823572320482317292ull);
    vlSelf->top__DOT__c__DOT__ids_ctrl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17365958669218025870ull);
    vlSelf->top__DOT__c__DOT__ids_imm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10665005829205278649ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__c__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14418454680154198793ull);
    }
    vlSelf->top__DOT__c__DOT__exs_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9924890700395358895ull);
    vlSelf->top__DOT__c__DOT__exs_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4647246404362920612ull);
    vlSelf->top__DOT__c__DOT__exs_mem_data_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5211376152759131163ull);
    vlSelf->top__DOT__c__DOT__exs_wb_data_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9012876868430601976ull);
    vlSelf->top__DOT__c__DOT__exs_data_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17495113054152264886ull);
    vlSelf->top__DOT__c__DOT__exs_op1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17610938871134430766ull);
    vlSelf->top__DOT__c__DOT__exs_op2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2142302752141023050ull);
    vlSelf->top__DOT__c__DOT__exs_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7737864012682354394ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11479074709542466164ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12461038844747711024ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10269048795260316317ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_is_requested = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974694113058528237ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_rvalided = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170602761537917798ull);
    vlSelf->top__DOT__c__DOT__exs_muldiv_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5882046906115738696ull);
    vlSelf->top__DOT__c__DOT__exs_brunit_take = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4234831105004033032ull);
    vlSelf->top__DOT__c__DOT__mems_is_new = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 308296148163406246ull);
    vlSelf->top__DOT__c__DOT__memu_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15803180885135539544ull);
    vlSelf->top__DOT__c__DOT__memu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568282605473918972ull);
    vlSelf->top__DOT__c__DOT__csru_raise_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12200074307630712079ull);
    vlSelf->top__DOT__c__DOT__csru_trap_vector = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7373623835436829778ull);
    vlSelf->top__DOT__c__DOT____Vcellinp__csru__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 230478720879624463ull);
    vlSelf->top__DOT__c__DOT__wbs_wb_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 946363497482944426ull);
    vlSelf->top__DOT__c__DOT__clock_count = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6653197010204350852ull);
    vlSelf->top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2250422504312707432ull);
    vlSelf->top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9666955532129260032ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(96, vlSelf->top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem[__Vi0], __VscopeHash, 4930359951592606038ull);
    }
    vlSelf->top__DOT__c__DOT__mdu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 696769183669562398ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__funct3_saved = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4668590657737860394ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__is_op32_saved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7587659322321970193ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__op1sign_saved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446687130063994576ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__op2sign_saved = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8426319714386837808ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__mu_result, __VscopeHash, 16360017111037941872ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__mu_op1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17005020375595382288ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__mu_op2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2210080396799785340ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_quotient = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12142861449600354590ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_dividend = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7346950797160638284ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_divisor = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10772159052085239533ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_signed_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934764980651133383ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_signed_divzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4693431112824200966ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du_signed_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1084826590406269390ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed, __VscopeHash, 3847995582244853084ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu, __VscopeHash, 4803282881237208218ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__quo_signed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4354886858207490525ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__rem_signed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7565671260059449603ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__resultX = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12053738867336828976ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9478565895803980175ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11396907662636080732ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__mu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10053053981806124077ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext, __VscopeHash, 17473402538257371688ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext, __VscopeHash, 7734490678755524708ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1320532872904403737ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17247924840861612809ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved, __VscopeHash, 3013999646456936670ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved, __VscopeHash, 11984488398857337764ull);
    vlSelf->top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16744831118834409612ull);
    vlSelf->top__DOT__c__DOT__memu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18069662738941432950ull);
    vlSelf->top__DOT__c__DOT__memu__DOT__req_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18334641910422991348ull);
    vlSelf->top__DOT__c__DOT__memu__DOT__req_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8819625436675347781ull);
    vlSelf->top__DOT__c__DOT__memu__DOT__req_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10347366076297173810ull);
    vlSelf->top__DOT__c__DOT__memu__DOT__req_wmask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8886665870776366120ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__mtvec = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12501248041554940589ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__mepc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12101174688822942233ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__mcause = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12559655600481878853ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__raise_expt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2526384797491963544ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__csr_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11188674915808725342ull);
    vlSelf->top__DOT__c__DOT__csru__DOT__wdata_masked = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16253024163596199704ull);
    vlSelf->__Vfunc_top__DOT__addr_to_memaddr__0__Vfuncout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1144534414541467900ull);
    vlSelf->__Vfunc_top__DOT__addr_to_memaddr__0__addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17135078658134888851ull);
    vlSelf->__Vfunc_top__DOT__addr_to_memaddr__1__Vfuncout = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2066515936387367473ull);
    vlSelf->__Vfunc_top__DOT__addr_to_memaddr__1__addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17130766608635478809ull);
    vlSelf->__Vfunc_inst_is_br__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9088185550083719478ull);
    vlSelf->__Vfunc_inst_is_br__6__ctrl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11861854177288132800ull);
    vlSelf->__Vfunc_inst_is_br__7__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4692604563597605593ull);
    vlSelf->__Vfunc_inst_is_br__7__ctrl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 835608007596641012ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1991029706563452517ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__is_op32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8842717089854575143ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12662080593984915909ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5310891630537427459ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1373194195938382618ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__is_op32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16946696095220174167ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12954078542289416686ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6419335584196094904ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3601610467854439148ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__is_op32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6857649829503391085ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13945528848519542392ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16467044177870458156ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16887849683784922173ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__is_op32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7529338680539125651ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7819875125535935566ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16384098052714494748ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13220388174777200156ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__is_op32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7807636403379411358ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16268582656419020360ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value64 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7674687586667567803ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12192070931450548223ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3866170838067740353ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9402240871062764954ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12032749454438881189ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13784305610202532796ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12431580914195331849ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18284056214314593412ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9625140989508397225ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16471108495692352994ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14332386124646252827ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__Vfuncout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14764809562589920886ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18089702747146294761ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2919238243982740944ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3762537594404984952ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1397389703115109890ull);
    vlSelf->__Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 725342702966814675ull);
    vlSelf->__Vfunc_inst_is_memop__25__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10462658037010030369ull);
    vlSelf->__Vfunc_inst_is_memop__25__ctrl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9973709149658373869ull);
    vlSelf->__Vdly__top__DOT__mem__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17154215276779749958ull);
    vlSelf->__Vdly__top__DOT__c__DOT__memu__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16722038464865421279ull);
    vlSelf->__VdlyVal__top__DOT__mem__DOT__mem__v0 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14429882814523278625ull);
    vlSelf->__VdlyDim0__top__DOT__mem__DOT__mem__v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15108189162235552608ull);
    vlSelf->__VdlySet__top__DOT__mem__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3495601893105415319ull);
}
