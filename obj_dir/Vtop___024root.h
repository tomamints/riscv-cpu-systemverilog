// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_membus_if__D20_A40;
class Vtop_membus_if__D40_A10;
class Vtop_membus_if__D40_A40;
class Vtop_svutil;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_svutil* __PVT__svutil;
    Vtop_membus_if__D40_A10* __PVT__top__DOT__membus;
    Vtop_membus_if__D20_A40* __PVT__top__DOT__i_membus;
    Vtop_membus_if__D40_A40* __PVT__top__DOT__d_membus;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(test_success,0,0);
        CData/*0:0*/ top__DOT__memarb_last_i;
        CData/*0:0*/ top__DOT__mem__DOT__state;
        CData/*7:0*/ top__DOT__mem__DOT__wmask_saved;
        CData/*0:0*/ top__DOT__c__DOT__if_fifo_wready;
        CData/*0:0*/ top__DOT__c__DOT__if_fifo_wready_two;
        CData/*0:0*/ top__DOT__c__DOT__if_fifo_wvalid;
        CData/*0:0*/ top__DOT__c__DOT__if_fifo_rready;
        CData/*0:0*/ top__DOT__c__DOT__if_fifo_rvalid;
        CData/*0:0*/ top__DOT__c__DOT__exq_rready;
        CData/*0:0*/ top__DOT__c__DOT__exq_rvalid;
        CData/*0:0*/ top__DOT__c__DOT__memq_wready;
        CData/*0:0*/ top__DOT__c__DOT__memq_wvalid;
        CData/*0:0*/ top__DOT__c__DOT__memq_rvalid;
        CData/*0:0*/ top__DOT__c__DOT__wbq_wvalid;
        CData/*0:0*/ top__DOT__c__DOT__wbq_rvalid;
        CData/*0:0*/ top__DOT__c__DOT__if_is_requested;
        CData/*0:0*/ top__DOT__c__DOT__control_hazard;
        CData/*0:0*/ top__DOT__c__DOT__exs_mem_data_hazard;
        CData/*0:0*/ top__DOT__c__DOT__exs_wb_data_hazard;
        CData/*0:0*/ top__DOT__c__DOT__exs_data_hazard;
        CData/*0:0*/ top__DOT__c__DOT__exs_muldiv_valid;
        CData/*0:0*/ top__DOT__c__DOT__exs_muldiv_ready;
        CData/*0:0*/ top__DOT__c__DOT__exs_muldiv_is_requested;
        CData/*0:0*/ top__DOT__c__DOT__exs_muldiv_rvalided;
        CData/*0:0*/ top__DOT__c__DOT__exs_muldiv_stall;
        CData/*0:0*/ top__DOT__c__DOT__exs_brunit_take;
        CData/*0:0*/ top__DOT__c__DOT__mems_is_new;
        CData/*0:0*/ top__DOT__c__DOT__memu_stall;
        CData/*0:0*/ top__DOT__c__DOT__csru_raise_trap;
        CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head;
        CData/*2:0*/ top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail;
        CData/*1:0*/ top__DOT__c__DOT__mdu__DOT__state;
        CData/*2:0*/ top__DOT__c__DOT__mdu__DOT__funct3_saved;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__is_op32_saved;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__op1sign_saved;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__op2sign_saved;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__du_signed_overflow;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__du_signed_divzero;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT__du_signed_error;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_0;
        CData/*0:0*/ top__DOT__c__DOT__mdu__DOT____VdfgRegularize_h14eef811_0_1;
        CData/*1:0*/ top__DOT__c__DOT__mdu__DOT__mu__DOT__state;
        CData/*1:0*/ top__DOT__c__DOT__mdu__DOT__du__DOT__state;
        CData/*6:0*/ top__DOT__c__DOT__mdu__DOT__du__DOT__sub_count;
        CData/*1:0*/ top__DOT__c__DOT__memu__DOT__state;
        CData/*0:0*/ top__DOT__c__DOT__memu__DOT__req_wen;
        CData/*7:0*/ top__DOT__c__DOT__memu__DOT__req_wmask;
        CData/*0:0*/ top__DOT__c__DOT__csru__DOT__raise_expt;
        CData/*0:0*/ __Vfunc_inst_is_br__6__Vfuncout;
        CData/*0:0*/ __Vfunc_inst_is_br__7__Vfuncout;
        CData/*0:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__is_op32;
        CData/*0:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__is_op32;
        CData/*0:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__is_op32;
        CData/*0:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__is_op32;
        CData/*0:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__is_op32;
        CData/*0:0*/ __Vfunc_inst_is_memop__25__Vfuncout;
        CData/*0:0*/ __Vdly__top__DOT__mem__DOT__state;
        CData/*1:0*/ __Vdly__top__DOT__c__DOT__memu__DOT__state;
        CData/*0:0*/ __VdlySet__top__DOT__mem__DOT__mem__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__mem__DOT__addr_saved;
        SData/*15:0*/ __Vfunc_top__DOT__addr_to_memaddr__0__Vfuncout;
        SData/*15:0*/ __Vfunc_top__DOT__addr_to_memaddr__1__Vfuncout;
        SData/*15:0*/ __VdlyDim0__top__DOT__mem__DOT__mem__v0;
        IData/*23:0*/ top__DOT__c__DOT__ids_ctrl;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__mu_result;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_signed;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__unnamedblk2__DOT__res_mulhsu;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__mu__DOT__op1zext;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__mu__DOT__op2zext;
        IData/*31:0*/ top__DOT__c__DOT__mdu__DOT__mu__DOT__add_count;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__du__DOT__dividend_saved;
        VlWide<4>/*127:0*/ top__DOT__c__DOT__mdu__DOT__du__DOT__divisor_saved;
        IData/*23:0*/ __Vfunc_inst_is_br__6__ctrl;
        IData/*23:0*/ __Vfunc_inst_is_br__7__ctrl;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__value;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__value;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__value;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__v32;
        IData/*31:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__v32;
        IData/*23:0*/ __Vfunc_inst_is_memop__25__ctrl;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__memarb_last_iaddr;
        QData/*63:0*/ top__DOT__mem__DOT__wdata_saved;
        QData/*63:0*/ top__DOT__mem__DOT__rdata_saved;
        QData/*63:0*/ top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded;
        VlWide<3>/*95:0*/ top__DOT__c__DOT__if_fifo_wdata;
        VlWide<3>/*95:0*/ top__DOT__c__DOT__if_fifo_rdata;
        VlWide<6>/*183:0*/ top__DOT__c__DOT__exq_rdata;
        VlWide<14>/*445:0*/ top__DOT__c__DOT__memq_wdata;
        VlWide<14>/*445:0*/ top__DOT__c__DOT__memq_rdata;
        VlWide<12>/*375:0*/ top__DOT__c__DOT__wbq_rdata;
        QData/*63:0*/ top__DOT__c__DOT__if_pc;
        QData/*63:0*/ top__DOT__c__DOT__if_pc_requested;
        QData/*63:0*/ top__DOT__c__DOT__if_pc_next;
        QData/*63:0*/ top__DOT__c__DOT__ids_imm;
        QData/*63:0*/ top__DOT__c__DOT__exs_rs1_data;
        QData/*63:0*/ top__DOT__c__DOT__exs_rs2_data;
        QData/*63:0*/ top__DOT__c__DOT__exs_op1;
        QData/*63:0*/ top__DOT__c__DOT__exs_op2;
        QData/*63:0*/ top__DOT__c__DOT__exs_alu_result;
        QData/*63:0*/ top__DOT__c__DOT__exs_muldiv_result;
        QData/*63:0*/ top__DOT__c__DOT__memu_rdata;
        QData/*63:0*/ top__DOT__c__DOT__csru_trap_vector;
        QData/*63:0*/ top__DOT__c__DOT____Vcellinp__csru__rs1;
        QData/*63:0*/ top__DOT__c__DOT__wbs_wb_data;
        QData/*63:0*/ top__DOT__c__DOT__clock_count;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__mu_op1;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__mu_op2;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__du_quotient;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__du_dividend;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__du_divisor;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__quo_signed;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__rem_signed;
        QData/*63:0*/ top__DOT__c__DOT__mdu__DOT__unnamedblk3__DOT__resultX;
        QData/*63:0*/ top__DOT__c__DOT__memu__DOT__req_addr;
        QData/*63:0*/ top__DOT__c__DOT__memu__DOT__req_wdata;
    };
    struct {
        QData/*63:0*/ top__DOT__c__DOT__csru__DOT__mtvec;
        QData/*63:0*/ top__DOT__c__DOT__csru__DOT__mepc;
        QData/*63:0*/ top__DOT__c__DOT__csru__DOT__mcause;
        QData/*63:0*/ top__DOT__c__DOT__csru__DOT__csr_read_data;
        QData/*63:0*/ top__DOT__c__DOT__csru__DOT__wdata_masked;
        QData/*63:0*/ __Vfunc_top__DOT__addr_to_memaddr__0__addr;
        QData/*63:0*/ __Vfunc_top__DOT__addr_to_memaddr__1__addr;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__9__value64;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__10__value64;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__11__value64;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__12__value64;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__alum__DOT__sel_w__13__value64;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__14__value;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__15__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__16__value;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__17__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__abs__18__value;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__sext_xlen__19__Vfuncout;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__20__val_ext;
        QData/*63:0*/ __Vfunc_top__DOT__c__DOT__mdu__DOT__generate_div_op1__21__val_ext;
        QData/*63:0*/ __VdlyVal__top__DOT__mem__DOT__mem__v0;
        VlUnpacked<QData/*63:0*/, 65536> top__DOT__mem__DOT__mem;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__c__DOT__regfile;
        VlUnpacked<VlWide<3>/*95:0*/, 8> top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
