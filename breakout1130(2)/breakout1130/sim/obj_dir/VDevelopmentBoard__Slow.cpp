// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDevelopmentBoard.h for the primary calling header

#include "VDevelopmentBoard.h"
#include "VDevelopmentBoard__Syms.h"

//==========

VL_CTOR_IMP(VDevelopmentBoard) {
    VDevelopmentBoard__Syms* __restrict vlSymsp = __VlSymsp = new VDevelopmentBoard__Syms(this, name());
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDevelopmentBoard::__Vconfigure(VDevelopmentBoard__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDevelopmentBoard::~VDevelopmentBoard() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDevelopmentBoard::_settle__TOP__2(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_settle__TOP__2\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->led1 = vlTOPp->reset;
    vlTOPp->led2 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key;
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
    vlTOPp->led4 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key;
    vlTOPp->led5 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key;
    vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt 
        = (0x3ffU & ((IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt) 
                     - (IData)(0x40U)));
    if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status) {
        if (vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status) {
            vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt 
                = (1U & (~ (IData)(vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose)));
        }
    } else {
        vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt 
            = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key;
    }
    vlTOPp->led3 = vlTOPp->DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key;
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

void VDevelopmentBoard::_eval_initial(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_eval_initial\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk 
        = vlTOPp->__VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
}

void VDevelopmentBoard::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::final\n"); );
    // Variables
    VDevelopmentBoard__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDevelopmentBoard::_eval_settle(VDevelopmentBoard__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_eval_settle\n"); );
    VDevelopmentBoard* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VDevelopmentBoard::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDevelopmentBoard::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    B2 = VL_RAND_RESET_I(1);
    B3 = VL_RAND_RESET_I(1);
    B4 = VL_RAND_RESET_I(1);
    B5 = VL_RAND_RESET_I(1);
    h_sync = VL_RAND_RESET_I(1);
    v_sync = VL_RAND_RESET_I(1);
    rgb = VL_RAND_RESET_I(16);
    led1 = VL_RAND_RESET_I(1);
    led2 = VL_RAND_RESET_I(1);
    led3 = VL_RAND_RESET_I(1);
    led4 = VL_RAND_RESET_I(1);
    led5 = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt = VL_RAND_RESET_I(10);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt = VL_RAND_RESET_I(10);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__color_bar_rgb = VL_RAND_RESET_I(16);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x = VL_RAND_RESET_I(10);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y = VL_RAND_RESET_I(10);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_player = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block = VL_RAND_RESET_I(3);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1 = VL_RAND_RESET_I(8);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2 = VL_RAND_RESET_I(8);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3 = VL_RAND_RESET_I(8);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state = VL_RAND_RESET_I(3);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state = VL_RAND_RESET_I(3);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position = VL_RAND_RESET_I(6);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt = VL_RAND_RESET_I(10);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__player_area = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block1_area = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block2_area = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block3_area = VL_RAND_RESET_I(1);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb = VL_RAND_RESET_I(3);
    DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks = VL_RAND_RESET_I(5);
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms = VL_RAND_RESET_I(20);
    __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt = VL_RAND_RESET_I(10);
    __VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk = VL_RAND_RESET_I(1);
}
