// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDevelopmentBoard.h for the primary calling header

#include "VDevelopmentBoard.h"
#include "VDevelopmentBoard__Syms.h"

//==========

void VDevelopmentBoard::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDevelopmentBoard::eval\n"); );
    VDevelopmentBoard__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("DevelopmentBoard.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDevelopmentBoard::_eval_initial_loop(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("DevelopmentBoard.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDevelopmentBoard::_combo__TOP__1(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_combo__TOP__1\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->led1 = vlTOPp->reset;
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__3(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__3\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*19:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms;
    // Body
    vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms;
    vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms;
    vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms 
            = ((IData)(vlTOPp->B5) ? 0U : (0xfffffU 
                                           & (((2U 
                                                == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms) 
                                               & (~ (IData)(vlTOPp->B5)))
                                               ? vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms
                                               : ((IData)(1U) 
                                                  + vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms))));
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms 
            = ((IData)(vlTOPp->B4) ? 0U : (0xfffffU 
                                           & (((2U 
                                                == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms) 
                                               & (~ (IData)(vlTOPp->B4)))
                                               ? vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms
                                               : ((IData)(1U) 
                                                  + vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms))));
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms 
            = ((IData)(vlTOPp->B3) ? 0U : (0xfffffU 
                                           & (((2U 
                                                == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms) 
                                               & (~ (IData)(vlTOPp->B3)))
                                               ? vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms
                                               : ((IData)(1U) 
                                                  + vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms))));
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms 
            = ((IData)(vlTOPp->B2) ? 0U : (0xfffffU 
                                           & (((2U 
                                                == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms) 
                                               & (~ (IData)(vlTOPp->B2)))
                                               ? vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms
                                               : ((IData)(1U) 
                                                  + vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms))));
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key 
            = ((1U == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms) 
               & 1U);
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status 
            = ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt) 
               & 1U);
    } else {
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms = 0U;
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms = 0U;
        vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms = 0U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms = 0U;
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key = 0U;
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status = 0U;
    }
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms;
    vlTOPp->led2 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key;
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__4(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__4\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__color_bar_rgb 
            = ((0xc8U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))
                ? (((0x78U <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                    & (0xa0U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                    ? 0xffffU : (((0xc8U <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                  & (0xf0U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                  ? 0xffffU : (((0x118U 
                                                 <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                & (0x140U 
                                                   > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                ? 0xffffU
                                                : (
                                                   ((0x168U 
                                                     <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                    & (0x190U 
                                                       > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                    ? 0xffffU
                                                    : 
                                                   (((0x1b8U 
                                                      <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                     & (0x1e0U 
                                                        > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                     ? 0xffffU
                                                     : 0U)))))
                : (((0xc8U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                    & (0xdcU >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)))
                    ? ((0x78U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                        ? 0xffffU : ((0xdcU == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                      ? 0xffffU : (
                                                   ((0x118U 
                                                     == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                    | (0x13fU 
                                                       == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                    ? 0xffffU
                                                    : 
                                                   (((0x168U 
                                                      == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                     | (0x18fU 
                                                        == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                     ? 0xffffU
                                                     : 
                                                    ((0x1ccU 
                                                      == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                      ? 0xffffU
                                                      : 0U)))))
                    : ((0xddU == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))
                        ? (((0x78U <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                            & (0xa0U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                            ? 0xffffU : ((0xdcU == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                          ? 0xffffU
                                          : (((0x118U 
                                               <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                              & (0x140U 
                                                 > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                              ? 0xffffU
                                              : (((0x168U 
                                                   <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                  & (0x190U 
                                                     > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                  ? 0xffffU
                                                  : 
                                                 ((0x1ccU 
                                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                   ? 0xffffU
                                                   : 0U)))))
                        : (((0xddU < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                            & (0xf0U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)))
                            ? ((0x9fU == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                ? 0xffffU : ((0xdcU 
                                              == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                              ? 0xffffU
                                              : (((0x118U 
                                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                  | (0x13fU 
                                                     == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                                  ? 0xffffU
                                                  : 
                                                 ((0x168U 
                                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                   ? 0xffffU
                                                   : 
                                                  (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                    == 
                                                    ((IData)(0x168U) 
                                                     + 
                                                     (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt) 
                                                       - (IData)(0xddU)) 
                                                      << 1U)))
                                                    ? 0xffffU
                                                    : 
                                                   ((0x1ccU 
                                                     == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                     ? 0xffffU
                                                     : 0U))))))
                            : ((0xf1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))
                                ? (((0x78U <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                    & (0xa0U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                    ? 0xffffU : ((0xdcU 
                                                  == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                  ? 0xffffU
                                                  : 
                                                 ((0x1ccU 
                                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                                   ? 0xffffU
                                                   : 0U)))
                                : 0U)))));
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk 
            = ((~ (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk)) 
               & 1U);
    } else {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__color_bar_rgb = 0U;
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk = 0U;
    }
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__5(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__5\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->h_sync = ((0x290U <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                      & (0x2f0U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)));
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__6(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__6\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn;
    CData/*5:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position;
    CData/*4:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks;
    CData/*7:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1;
    CData/*7:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2;
    CData/*7:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3;
    SData/*9:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt;
    SData/*9:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x;
    SData/*9:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y;
    // Body
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position;
    vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks;
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt 
        = ((IData)(vlTOPp->reset) ? ((0x31fU >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))
                                      ? (0x3ffU & ((IData)(1U) 
                                                   + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)))
                                      : 0U) : 0U);
    if (vlTOPp->reset) {
        if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key) {
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position 
                = (0x3fU & ((0x13U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position))
                             ? ((IData)(1U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position))
                             : (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position)));
        } else {
            if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key) {
                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position 
                    = (0x3fU & ((1U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position))
                                 ? ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position) 
                                    - (IData)(1U)) : (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position)));
            }
        }
    } else {
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position = 9U;
    }
    vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt 
        = ((IData)(vlTOPp->reset) ? (0x3ffU & (((0x31fU 
                                                 == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                                & (0x20cU 
                                                   >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))
                                                : (
                                                   (0x20cU 
                                                    >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))
                                                    ? (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)
                                                    : 0U)))
            : 0U);
    if (vlTOPp->reset) {
        if (((IData)(vlTOPp->v_sync) & (~ (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn)))) {
            if ((4U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                if ((2U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                        = (0x3ffU & ((IData)(5U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)));
                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                        = (0x3ffU & ((IData)(0xaU) 
                                     + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)));
                } else {
                    if ((1U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = (0x3ffU & ((IData)(5U) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)));
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = (0x3ffU & ((IData)(0xaU) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)));
                    } else {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x;
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y;
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                    if ((1U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                         - (IData)(5U)));
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                         - (IData)(0xaU)));
                    } else {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = (0x3ffU & ((IData)(5U) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)));
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                         - (IData)(0xaU)));
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                         - (IData)(5U)));
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = (0x3ffU & ((IData)(0xaU) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)));
                    } else {
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
                            = (0x3ffU & ((IData)(5U) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)));
                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
                            = (0x3ffU & ((IData)(0xaU) 
                                         + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)));
                    }
                }
            }
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn = 1U;
        } else {
            if (((~ (IData)(vlTOPp->v_sync)) & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn))) {
                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn = 0U;
            }
        }
    } else {
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y = 0x190U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x = 0x140U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn = 1U;
    }
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb 
        = ((IData)(vlTOPp->reset) ? (((0x27fU < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                      | (0x1dfU < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)))
                                      ? 0U : (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win) 
                                               | (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose))
                                               ? 4U
                                               : ((
                                                   ((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt) 
                                                      < 
                                                      ((IData)(3U) 
                                                       + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y))) 
                                                     & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt) 
                                                        > 
                                                        ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                                         - (IData)(3U)))) 
                                                    & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                       < 
                                                       ((IData)(3U) 
                                                        + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)))) 
                                                   & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                      > 
                                                      ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                                       - (IData)(3U))))
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__player_area)
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block1_area)
                                                        ? 
                                                       ((1U 
                                                         & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1) 
                                                            >> 
                                                            (7U 
                                                             & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt) 
                                                                >> 6U))))
                                                         ? 6U
                                                         : 0U)
                                                        : 
                                                       ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block2_area)
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2) 
                                                             >> 
                                                             (7U 
                                                              & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt) 
                                                                 >> 6U))))
                                                          ? 6U
                                                          : 0U)
                                                         : 
                                                        ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block3_area)
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3) 
                                                              >> 
                                                              (7U 
                                                               & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt) 
                                                                  >> 6U))))
                                                           ? 6U
                                                           : 0U)
                                                          : 0U))))))))
            : 0U);
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state 
        = ((IData)(vlTOPp->reset) ? (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state)
            : 4U);
    if (vlTOPp->reset) {
        if ((1U & (~ (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key)))) {
            if (vlTOPp->v_sync) {
                if ((0x1d8U <= ((IData)(5U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)))) {
                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose = 1U;
                }
            }
        }
    } else {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose = 0U;
    }
    if (vlTOPp->reset) {
        if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key) {
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks = 0x18U;
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 = 0xffU;
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 = 0xffU;
            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 = 0xffU;
        } else {
            if ((1U & (~ (IData)(vlTOPp->v_sync)))) {
                if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_player) {
                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision 
                        = ((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                             == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                            & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                - (IData)(3U)) <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
                           & (((IData)(3U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)) 
                              >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)));
                } else {
                    if ((1U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block))) {
                        if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                               == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                              & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                  - (IData)(0xaU)) 
                                 <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
                             & ((((IData)(0xaU) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)) 
                                 >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1) 
                                   >> (7U & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                              - (IData)(0x40U)) 
                                             >> 6U)))))) {
                            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                = (0x1fU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                            - (IData)(1U)));
                            vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 1U;
                            __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 
                                = ((~ ((IData)(1U) 
                                       << (7U & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                  - (IData)(0x40U)) 
                                                 >> 6U)))) 
                                   & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1));
                            if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                            }
                        } else {
                            if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                  & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                      - (IData)(5U)) 
                                     <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
                                 & ((((IData)(5U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)) 
                                     >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                    & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1) 
                                       >> (7U & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                  - (IData)(0x40U)) 
                                                 >> 6U)))))) {
                                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                    = (0x1fU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                                - (IData)(1U)));
                                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 1U;
                                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 
                                    = ((~ ((IData)(1U) 
                                           << (7U & 
                                               (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                 - (IData)(0x40U)) 
                                                >> 6U)))) 
                                       & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1));
                                if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                                }
                            } else {
                                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 0U;
                                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block))) {
                            if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                   == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                  & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                      - (IData)(1U)) 
                                     <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
                                 & ((((IData)(0xaU) 
                                      + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)) 
                                     >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                    & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2) 
                                       >> (7U & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                  - (IData)(0x40U)) 
                                                 >> 6U)))))) {
                                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                    = (0x1fU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                                - (IData)(1U)));
                                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 1U;
                                __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 
                                    = ((~ ((IData)(1U) 
                                           << (7U & 
                                               (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                 - (IData)(0x40U)) 
                                                >> 6U)))) 
                                       & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2));
                                if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                                }
                            } else {
                                if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                       == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                      & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                          - (IData)(5U)) 
                                         <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
                                     & ((((IData)(5U) 
                                          + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)) 
                                         >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                        & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2) 
                                           >> (7U & 
                                               (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                 - (IData)(0x40U)) 
                                                >> 6U)))))) {
                                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                        = (0x1fU & 
                                           ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                            - (IData)(1U)));
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 1U;
                                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 
                                        = ((~ ((IData)(1U) 
                                               << (7U 
                                                   & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                       - (IData)(0x40U)) 
                                                      >> 6U)))) 
                                           & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2));
                                    if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                                    }
                                } else {
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 0U;
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 0U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block))) {
                                if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                       == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                      & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                          - (IData)(1U)) 
                                         <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
                                     & ((((IData)(0xaU) 
                                          + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)) 
                                         >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                        & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3) 
                                           >> (7U & 
                                               (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                 - (IData)(0x40U)) 
                                                >> 6U)))))) {
                                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                        = (0x1fU & 
                                           ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                            - (IData)(1U)));
                                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 1U;
                                    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 
                                        = ((~ ((IData)(1U) 
                                               << (7U 
                                                   & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                       - (IData)(0x40U)) 
                                                      >> 6U)))) 
                                           & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3));
                                    if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                                    }
                                } else {
                                    if (((((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                           == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                                          & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                              - (IData)(5U)) 
                                             <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
                                         & ((((IData)(5U) 
                                              + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)) 
                                             >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)) 
                                            & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3) 
                                               >> (7U 
                                                   & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                       - (IData)(0x40U)) 
                                                      >> 6U)))))) {
                                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
                                            = (0x1fU 
                                               & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks) 
                                                  - (IData)(1U)));
                                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 1U;
                                        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 
                                            = ((~ ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                                                        - (IData)(0x40U)) 
                                                       >> 6U)))) 
                                               & (IData)(__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3));
                                        if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks))) {
                                            vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 1U;
                                        }
                                    } else {
                                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 0U;
                                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = 0U;
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = 0U;
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = 0U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks = 0U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 = 0U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 = 0U;
        __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 = 0U;
    }
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt 
        = __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt 
        = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                     - (IData)(0x40U)));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_player 
        = ((IData)(vlTOPp->reset) & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__player_area));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block 
        = ((IData)(vlTOPp->reset) ? ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block1_area)
                                      ? 1U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block2_area)
                                               ? 2U
                                               : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block3_area)
                                                   ? 4U
                                                   : 0U)))
            : 0U);
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__7(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__7\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key 
        = ((IData)(vlTOPp->reset) & (1U == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key 
        = ((IData)(vlTOPp->reset) & (1U == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key 
        = ((IData)(vlTOPp->reset) & (1U == vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms 
        = vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms 
        = vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms 
        = vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms;
    vlTOPp->led5 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key;
    vlTOPp->led4 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key;
    vlTOPp->led3 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key;
}

VL_INLINE_OPT void VDevelopmentBoard::_multiclk__TOP__8(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_multiclk__TOP__8\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rgb = ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status)
                    ? ((0xf800U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb) 
                                                >> 2U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb) 
                                                                   >> 1U)))) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb)))))))
                    : (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__color_bar_rgb));
    if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status) {
        if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status) {
            vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt 
                = (1U & (~ (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose)));
        }
    } else {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt 
            = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key;
    }
    if ((4U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state 
            = ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key)
                ? 0U : 4U);
    } else {
        if ((0U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
            vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state 
                = ((0x1d8U <= ((IData)(8U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)))
                    ? 2U : ((0x278U <= ((IData)(8U) 
                                        + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)))
                             ? 1U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision)
                                      ? 2U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision)
                                               ? 1U
                                               : 0U))));
        } else {
            if ((1U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state 
                    = ((0x1d8U <= ((IData)(8U) + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y)))
                        ? 3U : ((8U >= ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                        - (IData)(8U)))
                                 ? 0U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision)
                                          ? 3U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision)
                                                   ? 0U
                                                   : 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state 
                        = ((8U >= ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                   - (IData)(0xaU)))
                            ? 0U : ((0x278U <= ((IData)(8U) 
                                                + (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x)))
                                     ? 3U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision)
                                              ? 0U : 
                                             ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision)
                                               ? 3U
                                               : 2U))));
                } else {
                    if ((3U == (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state))) {
                        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state 
                            = ((8U >= ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y) 
                                       - (IData)(0xaU)))
                                ? 1U : ((8U >= ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x) 
                                                - (IData)(8U)))
                                         ? 2U : ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision)
                                                   ? 2U
                                                   : 3U))));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__9(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__9\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v_sync = ((0x1eaU <= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
                      & (0x1ecU >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)));
}

VL_INLINE_OPT void VDevelopmentBoard::_sequent__TOP__10(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_sequent__TOP__10\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt 
        = vlTOPp->__Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block1_area 
        = ((((0x40U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
             & (0x60U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
            & (0x40U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
           & (0x240U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block2_area 
        = ((((0x80U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
             & (0xa0U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
            & (0x40U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
           & (0x240U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block3_area 
        = ((((0xc0U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
             & (0xe0U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
            & (0x40U < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt))) 
           & (0x240U >= (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt)));
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__player_area 
        = ((((0x1ccU < (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt)) 
             & (0x1d4U > (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt))) 
            & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
               > ((IData)(8U) + (((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position) 
                                  << 5U) - (IData)(0x20U))))) 
           & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
              < ((IData)(0x28U) + ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position) 
                                   << 5U))));
}

void VDevelopmentBoard::_eval(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_eval\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk))) 
          | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_multiclk__TOP__8(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk))) 
         | ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->__Vclklast__TOP__reset)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk 
        = vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
}

VL_INLINE_OPT QData VDevelopmentBoard::_change_request(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_change_request\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDevelopmentBoard::_change_request_1(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_change_request_1\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk ^ vlTOPp->__Vchglast__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk ^ vlTOPp->__Vchglast__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk))) VL_DBG_MSGF("        CHANGE: ../src//breakout.v:19: DevelopmentBoard.Simple_VGA_inst.breakout.pxl_clk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk 
        = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    return __req;
}

#ifdef VL_DEBUG
void VDevelopmentBoard::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((B2 & 0xfeU))) {
        Verilated::overWidthError("B2");}
    if (VL_UNLIKELY((B3 & 0xfeU))) {
        Verilated::overWidthError("B3");}
    if (VL_UNLIKELY((B4 & 0xfeU))) {
        Verilated::overWidthError("B4");}
    if (VL_UNLIKELY((B5 & 0xfeU))) {
        Verilated::overWidthError("B5");}
}
#endif  // VL_DEBUG
