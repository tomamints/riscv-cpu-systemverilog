// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__eei__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__i_membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+245,0,"test_success",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("eei", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__eei__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+249,0,"MEMORY_FILEPATH_IS_ENV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+245,0,"test_success",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("i_membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__i_membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("d_membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"memarb_last_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"memarb_last_iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("c", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__i_membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("d_membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+4,0,"if_fifo_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"if_fifo_wready_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"if_fifo_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+7,0,"if_fifo_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+119,0,"if_fifo_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"if_fifo_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"if_fifo_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declQuad(c+10,0,"if_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"if_is_requested",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"if_pc_requested",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"if_pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+124,0,"control_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"control_hazard_pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+120,0,"inst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"inst_is_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+130,0,"inst_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"inst_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+132,0,"inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+53+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+134,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+136,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+146,0,"brunit_take",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"memu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+149,0,"memu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+151,0,"csru_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+153,0,"csru_raise_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+154,0,"csru_trap_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+156,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"clock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("alum", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+131,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+140,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+144,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+158,0,"add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+160,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+162,0,"sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+168,0,"sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+170,0,"add32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"sub32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"sll32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"srl32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+174,0,"sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+176,0,"sra32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+140,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+146,0,"take",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+131,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+150,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+181,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declQuad(c+182,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+153,0,"raise_trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+154,0,"trap_vector",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"MTVEC_WMASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"MEPC_WMASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+252,0,"MCAUSE_WMASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+19,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+184,0,"csr_has_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"csr_is_setclr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"csr_src_is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"csr_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"raise_expt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+254,0,"trap_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+191,0,"csr_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+193,0,"wdata_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+195,0,"wdata_masked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+130,0,"bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+132,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+181,0,"imm_i_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+197,0,"imm_s_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+198,0,"imm_b_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+199,0,"imm_u_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+200,0,"imm_j_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+201,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+203,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+205,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+207,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+209,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+211,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+212,0,"f7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+213,0,"f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+256,0,"T",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+257,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("if_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"wready_two",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+7,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+119,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->pushPrefix("width_multi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+27,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+30,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+33,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+36,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+39,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+42,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+45,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declArray(c+48,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
    tracep->declBus(c+51,0,"tail_plus1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"tail_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"is_new",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+144,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+147,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+149,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+214,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"req_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+216,0,"req_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+218,0,"req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"req_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+221,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+223,0,"sext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+249,0,"FILEPATH_IS_ENV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("membus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__top__DOT__membus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+224,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+225,0,"addr_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+226,0,"wdata_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+228,0,"wmask_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+229,0,"rdata_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+117,0,"wmask_expanded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+261,0,"RISCVTESTS_TOHOST_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__eei__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__eei__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+263,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+264,0,"ILEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+259,0,"MEM_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"MEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+265,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+266,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+267,0,"OP_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+268,0,"OP_OP_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+269,0,"OP_OP_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+270,0,"OP_OP_IMM_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+271,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+272,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+273,0,"OP_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+274,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+275,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+276,0,"OP_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__membus__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+259,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+260,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+231,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+234,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+235,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+237,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+239,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__i_membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__i_membus__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+277,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+259,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+278,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+242,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+248,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__d_membus__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+259,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+259,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+243,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+216,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+215,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+218,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+220,0,"wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+244,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+239,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+249,(1U));
    bufp->fullQData(oldp+250,(0xfffffffffffffffcULL),64);
    bufp->fullQData(oldp+252,(0xffffffffffffffffULL),64);
    bufp->fullQData(oldp+254,(0xbULL),64);
    bufp->fullBit(oldp+256,(1U));
    bufp->fullBit(oldp+257,(0U));
    bufp->fullIData(oldp+258,(3U),32);
    bufp->fullIData(oldp+259,(0x40U),32);
    bufp->fullIData(oldp+260,(0x10U),32);
    bufp->fullQData(oldp+261,(0x1000ULL),64);
    bufp->fullIData(oldp+263,(0x40U),32);
    bufp->fullIData(oldp+264,(0x20U),32);
    bufp->fullCData(oldp+265,(0x37U),7);
    bufp->fullCData(oldp+266,(0x17U),7);
    bufp->fullCData(oldp+267,(0x33U),7);
    bufp->fullCData(oldp+268,(0x13U),7);
    bufp->fullCData(oldp+269,(0x3bU),7);
    bufp->fullCData(oldp+270,(0x1bU),7);
    bufp->fullCData(oldp+271,(0x6fU),7);
    bufp->fullCData(oldp+272,(0x67U),7);
    bufp->fullCData(oldp+273,(0x63U),7);
    bufp->fullCData(oldp+274,(3U),7);
    bufp->fullCData(oldp+275,(0x23U),7);
    bufp->fullCData(oldp+276,(0x73U),7);
    bufp->fullIData(oldp+277,(0x20U),32);
    bufp->fullBit(oldp+278,(0U));
    bufp->fullIData(oldp+279,(0U),32);
    bufp->fullCData(oldp+280,(vlSymsp->TOP__top__DOT__i_membus.__PVT__wmask),4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.top__DOT__memarb_last_i));
    bufp->fullQData(oldp+2,(vlSelfRef.top__DOT__memarb_last_iaddr),64);
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__c__DOT__if_fifo_wready));
    bufp->fullBit(oldp+5,(vlSelfRef.top__DOT__c__DOT__if_fifo_wready_two));
    bufp->fullBit(oldp+6,(vlSelfRef.top__DOT__c__DOT__if_fifo_wvalid));
    bufp->fullWData(oldp+7,(vlSelfRef.top__DOT__c__DOT__if_fifo_wdata),96);
    bufp->fullQData(oldp+10,(vlSelfRef.top__DOT__c__DOT__if_pc),64);
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__c__DOT__if_is_requested));
    bufp->fullQData(oldp+13,(vlSelfRef.top__DOT__c__DOT__if_pc_requested),64);
    bufp->fullQData(oldp+15,((4ULL + vlSelfRef.top__DOT__c__DOT__if_pc)),64);
    bufp->fullQData(oldp+17,(vlSelfRef.top__DOT__c__DOT__clock_count),64);
    bufp->fullQData(oldp+19,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mtvec),64);
    bufp->fullQData(oldp+21,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mepc),64);
    bufp->fullQData(oldp+23,(vlSelfRef.top__DOT__c__DOT__csru__DOT__mcause),64);
    bufp->fullCData(oldp+25,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__head),3);
    bufp->fullCData(oldp+26,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail),3);
    bufp->fullWData(oldp+27,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [0U]),96);
    bufp->fullWData(oldp+30,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [1U]),96);
    bufp->fullWData(oldp+33,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [2U]),96);
    bufp->fullWData(oldp+36,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [3U]),96);
    bufp->fullWData(oldp+39,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [4U]),96);
    bufp->fullWData(oldp+42,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [5U]),96);
    bufp->fullWData(oldp+45,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [6U]),96);
    bufp->fullWData(oldp+48,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__mem
                             [7U]),96);
    bufp->fullCData(oldp+51,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus1),3);
    bufp->fullCData(oldp+52,(vlSelfRef.top__DOT__c__DOT__if_fifo__DOT__width_multi__DOT__tail_plus2),3);
    bufp->fullQData(oldp+53,(vlSelfRef.top__DOT__c__DOT__regfile[0]),64);
    bufp->fullQData(oldp+55,(vlSelfRef.top__DOT__c__DOT__regfile[1]),64);
    bufp->fullQData(oldp+57,(vlSelfRef.top__DOT__c__DOT__regfile[2]),64);
    bufp->fullQData(oldp+59,(vlSelfRef.top__DOT__c__DOT__regfile[3]),64);
    bufp->fullQData(oldp+61,(vlSelfRef.top__DOT__c__DOT__regfile[4]),64);
    bufp->fullQData(oldp+63,(vlSelfRef.top__DOT__c__DOT__regfile[5]),64);
    bufp->fullQData(oldp+65,(vlSelfRef.top__DOT__c__DOT__regfile[6]),64);
    bufp->fullQData(oldp+67,(vlSelfRef.top__DOT__c__DOT__regfile[7]),64);
    bufp->fullQData(oldp+69,(vlSelfRef.top__DOT__c__DOT__regfile[8]),64);
    bufp->fullQData(oldp+71,(vlSelfRef.top__DOT__c__DOT__regfile[9]),64);
    bufp->fullQData(oldp+73,(vlSelfRef.top__DOT__c__DOT__regfile[10]),64);
    bufp->fullQData(oldp+75,(vlSelfRef.top__DOT__c__DOT__regfile[11]),64);
    bufp->fullQData(oldp+77,(vlSelfRef.top__DOT__c__DOT__regfile[12]),64);
    bufp->fullQData(oldp+79,(vlSelfRef.top__DOT__c__DOT__regfile[13]),64);
    bufp->fullQData(oldp+81,(vlSelfRef.top__DOT__c__DOT__regfile[14]),64);
    bufp->fullQData(oldp+83,(vlSelfRef.top__DOT__c__DOT__regfile[15]),64);
    bufp->fullQData(oldp+85,(vlSelfRef.top__DOT__c__DOT__regfile[16]),64);
    bufp->fullQData(oldp+87,(vlSelfRef.top__DOT__c__DOT__regfile[17]),64);
    bufp->fullQData(oldp+89,(vlSelfRef.top__DOT__c__DOT__regfile[18]),64);
    bufp->fullQData(oldp+91,(vlSelfRef.top__DOT__c__DOT__regfile[19]),64);
    bufp->fullQData(oldp+93,(vlSelfRef.top__DOT__c__DOT__regfile[20]),64);
    bufp->fullQData(oldp+95,(vlSelfRef.top__DOT__c__DOT__regfile[21]),64);
    bufp->fullQData(oldp+97,(vlSelfRef.top__DOT__c__DOT__regfile[22]),64);
    bufp->fullQData(oldp+99,(vlSelfRef.top__DOT__c__DOT__regfile[23]),64);
    bufp->fullQData(oldp+101,(vlSelfRef.top__DOT__c__DOT__regfile[24]),64);
    bufp->fullQData(oldp+103,(vlSelfRef.top__DOT__c__DOT__regfile[25]),64);
    bufp->fullQData(oldp+105,(vlSelfRef.top__DOT__c__DOT__regfile[26]),64);
    bufp->fullQData(oldp+107,(vlSelfRef.top__DOT__c__DOT__regfile[27]),64);
    bufp->fullQData(oldp+109,(vlSelfRef.top__DOT__c__DOT__regfile[28]),64);
    bufp->fullQData(oldp+111,(vlSelfRef.top__DOT__c__DOT__regfile[29]),64);
    bufp->fullQData(oldp+113,(vlSelfRef.top__DOT__c__DOT__regfile[30]),64);
    bufp->fullQData(oldp+115,(vlSelfRef.top__DOT__c__DOT__regfile[31]),64);
    bufp->fullQData(oldp+117,(vlSelfRef.top__DOT__mem__DOT__unnamedblk2__DOT__wmask_expanded),64);
    bufp->fullBit(oldp+119,((1U & (~ (IData)(vlSelfRef.top__DOT__c__DOT__memu_stall)))));
    bufp->fullBit(oldp+120,(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid));
    bufp->fullWData(oldp+121,(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata),96);
    bufp->fullBit(oldp+124,(vlSelfRef.top__DOT__c__DOT__control_hazard));
    bufp->fullQData(oldp+125,(vlSelfRef.top__DOT__c__DOT__control_hazard_pc_next),64);
    bufp->fullBit(oldp+127,(vlSelfRef.top__DOT__c__DOT__inst_is_new));
    bufp->fullQData(oldp+128,((((QData)((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[2U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[1U])))),64);
    bufp->fullIData(oldp+130,(vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.top__DOT__c__DOT__inst_ctrl),23);
    bufp->fullQData(oldp+132,(vlSelfRef.top__DOT__c__DOT__inst_imm),64);
    bufp->fullCData(oldp+134,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+135,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+136,(vlSelfRef.top__DOT__c__DOT__rs1_data),64);
    bufp->fullQData(oldp+138,(vlSelfRef.top__DOT__c__DOT__rs2_data),64);
    bufp->fullQData(oldp+140,(vlSelfRef.top__DOT__c__DOT__op1),64);
    bufp->fullQData(oldp+142,(vlSelfRef.top__DOT__c__DOT__op2),64);
    bufp->fullQData(oldp+144,(vlSelfRef.top__DOT__c__DOT__alu_result),64);
    bufp->fullBit(oldp+146,(vlSelfRef.top__DOT__c__DOT__brunit_take));
    bufp->fullQData(oldp+147,(vlSelfRef.top__DOT__c__DOT__memu_rdata),64);
    bufp->fullBit(oldp+149,(vlSelfRef.top__DOT__c__DOT__memu_stall));
    bufp->fullCData(oldp+150,((0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                        >> 7U))),5);
    bufp->fullQData(oldp+151,(vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_read_data),64);
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__c__DOT__csru_raise_trap));
    bufp->fullQData(oldp+154,(vlSelfRef.top__DOT__c__DOT__csru_trap_vector),64);
    bufp->fullQData(oldp+156,(vlSelfRef.top__DOT__c__DOT__wb_data),64);
    bufp->fullQData(oldp+158,(vlSelfRef.top__DOT__c__DOT__alum__DOT__add),64);
    bufp->fullQData(oldp+160,((vlSelfRef.top__DOT__c__DOT__op1 
                               - vlSelfRef.top__DOT__c__DOT__op2)),64);
    bufp->fullQData(oldp+162,((vlSelfRef.top__DOT__c__DOT__op1 
                               << (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
    bufp->fullQData(oldp+164,((vlSelfRef.top__DOT__c__DOT__op1 
                               >> (0x3fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
    bufp->fullQData(oldp+166,((QData)((IData)(VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__op1, vlSelfRef.top__DOT__c__DOT__op2)))),64);
    bufp->fullQData(oldp+168,((QData)((IData)((vlSelfRef.top__DOT__c__DOT__op1 
                                               < vlSelfRef.top__DOT__c__DOT__op2)))),64);
    bufp->fullIData(oldp+170,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                               + (IData)(vlSelfRef.top__DOT__c__DOT__op2))),32);
    bufp->fullIData(oldp+171,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                               - (IData)(vlSelfRef.top__DOT__c__DOT__op2))),32);
    bufp->fullIData(oldp+172,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                               << (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
    bufp->fullIData(oldp+173,(((IData)(vlSelfRef.top__DOT__c__DOT__op1) 
                               >> (0x1fU & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
    bufp->fullQData(oldp+174,(VL_SHIFTRS_QQI(64,64,6, vlSelfRef.top__DOT__c__DOT__op1, 
                                             (0x3fU 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),64);
    bufp->fullIData(oldp+176,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelfRef.top__DOT__c__DOT__op1), 
                                             (0x1fU 
                                              & (IData)(vlSelfRef.top__DOT__c__DOT__op2)))),32);
    bufp->fullCData(oldp+177,((7U & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                     >> 7U))),3);
    bufp->fullBit(oldp+178,((vlSelfRef.top__DOT__c__DOT__op1 
                             == vlSelfRef.top__DOT__c__DOT__op2)));
    bufp->fullBit(oldp+179,(VL_LTS_IQQ(64, vlSelfRef.top__DOT__c__DOT__op1, vlSelfRef.top__DOT__c__DOT__op2)));
    bufp->fullBit(oldp+180,((vlSelfRef.top__DOT__c__DOT__op1 
                             < vlSelfRef.top__DOT__c__DOT__op2)));
    bufp->fullSData(oldp+181,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+182,(vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1),64);
    bufp->fullBit(oldp+184,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                              >> 0xaU) & (0U != (7U 
                                                 & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                    >> 7U))))));
    bufp->fullBit(oldp+185,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                              >> 0xaU) & (1U != (3U 
                                                 & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                    >> 7U))))));
    bufp->fullBit(oldp+186,((0ULL == vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1)));
    bufp->fullBit(oldp+187,((((IData)(vlSelfRef.top__DOT__c__DOT__if_fifo_rvalid) 
                              & ((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                  >> 0xaU) & (0U != 
                                              (7U & 
                                               (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                >> 7U))))) 
                             & (~ (((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                     >> 0xaU) & (1U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                                                     >> 7U)))) 
                                   & (0ULL == vlSelfRef.top__DOT__c__DOT____Vcellinp__csru__rs1))))));
    bufp->fullBit(oldp+188,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                              >> 0xaU) & ((0U == (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                  >> 0x14U)) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_hb1f32181_0_0)))));
    bufp->fullBit(oldp+189,(((vlSelfRef.top__DOT__c__DOT__inst_ctrl 
                              >> 0xaU) & ((0x302U == 
                                           (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                            >> 0x14U)) 
                                          & (IData)(vlSelfRef.__VdfgRegularize_hb1f32181_0_0)))));
    bufp->fullBit(oldp+190,(vlSelfRef.top__DOT__c__DOT__csru__DOT__raise_expt));
    bufp->fullQData(oldp+191,(vlSelfRef.top__DOT__c__DOT__csru__DOT__csr_wmask),64);
    bufp->fullQData(oldp+193,(vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_raw),64);
    bufp->fullQData(oldp+195,(vlSelfRef.top__DOT__c__DOT__csru__DOT__wdata_masked),64);
    bufp->fullSData(oldp+197,(((0xfe0U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+198,((((0x800U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                           >> 0x14U)) 
                                | (0x400U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                             << 3U))) 
                               | ((0x3f0U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                             >> 0x15U)) 
                                  | (0xfU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                             >> 8U))))),12);
    bufp->fullIData(oldp+199,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+200,(((0x80000U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                  >> 0x15U)))))),20);
    bufp->fullQData(oldp+201,((((- (QData)((IData)(
                                                   (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                            >> 0x14U))))),64);
    bufp->fullQData(oldp+203,((((- (QData)((IData)(
                                                   (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                                  >> 7U))))))),64);
    bufp->fullQData(oldp+205,((((- (QData)((IData)(
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
    bufp->fullQData(oldp+207,((((QData)((IData)((- (IData)(
                                                           (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U]))))),64);
    bufp->fullQData(oldp+209,((((- (QData)((IData)(
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
    bufp->fullCData(oldp+211,((0x7fU & vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U])),7);
    bufp->fullCData(oldp+212,((vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+213,((7U & (vlSelfRef.top__DOT__c__DOT__if_fifo_rdata[0U] 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+214,(vlSelfRef.top__DOT__c__DOT__memu__DOT__state),2);
    bufp->fullBit(oldp+215,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wen));
    bufp->fullQData(oldp+216,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_addr),64);
    bufp->fullQData(oldp+218,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata),64);
    bufp->fullCData(oldp+220,(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask),8);
    bufp->fullQData(oldp+221,(vlSelfRef.top__DOT__c__DOT__memu__DOT__D),64);
    bufp->fullBit(oldp+223,(vlSelfRef.top__DOT__c__DOT__memu__DOT__sext));
    bufp->fullBit(oldp+224,(vlSelfRef.top__DOT__mem__DOT__state));
    bufp->fullSData(oldp+225,(vlSelfRef.top__DOT__mem__DOT__addr_saved),16);
    bufp->fullQData(oldp+226,(vlSelfRef.top__DOT__mem__DOT__wdata_saved),64);
    bufp->fullCData(oldp+228,(vlSelfRef.top__DOT__mem__DOT__wmask_saved),8);
    bufp->fullQData(oldp+229,(vlSelfRef.top__DOT__mem__DOT__rdata_saved),64);
    bufp->fullBit(oldp+231,(vlSymsp->TOP__top__DOT__membus.valid));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelfRef.top__DOT__mem__DOT__state)))));
    bufp->fullSData(oldp+233,(vlSymsp->TOP__top__DOT__membus.addr),16);
    bufp->fullBit(oldp+234,(vlSymsp->TOP__top__DOT__membus.wen));
    bufp->fullQData(oldp+235,(((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                ? vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wdata
                                : 0ULL)),64);
    bufp->fullCData(oldp+237,(((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))
                                ? (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__req_wmask)
                                : 0U)),8);
    bufp->fullBit(oldp+238,(vlSymsp->TOP__top__DOT__membus.rvalid));
    bufp->fullQData(oldp+239,(vlSymsp->TOP__top__DOT__membus.rdata),64);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__top__DOT__i_membus.ready));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__top__DOT__i_membus.rvalid));
    bufp->fullBit(oldp+243,((1U == (IData)(vlSelfRef.top__DOT__c__DOT__memu__DOT__state))));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__top__DOT__d_membus.rvalid));
    bufp->fullBit(oldp+245,(vlSelfRef.test_success));
    bufp->fullBit(oldp+246,(vlSelfRef.clk));
    bufp->fullBit(oldp+247,(vlSelfRef.rst));
    bufp->fullIData(oldp+248,(((1U & (IData)((vlSelfRef.top__DOT__memarb_last_iaddr 
                                              >> 2U)))
                                ? (IData)((vlSymsp->TOP__top__DOT__membus.rdata 
                                           >> 0x20U))
                                : (IData)(vlSymsp->TOP__top__DOT__membus.rdata))),32);
}
