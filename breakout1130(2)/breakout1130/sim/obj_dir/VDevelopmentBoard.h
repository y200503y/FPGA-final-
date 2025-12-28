// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDEVELOPMENTBOARD_H_
#define _VDEVELOPMENTBOARD_H_  // guard

#include "verilated.h"

//==========

class VDevelopmentBoard__Syms;

//----------

VL_MODULE(VDevelopmentBoard) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(B2,0,0);
    VL_IN8(B3,0,0);
    VL_IN8(B4,0,0);
    VL_IN8(B5,0,0);
    VL_OUT8(h_sync,0,0);
    VL_OUT8(v_sync,0,0);
    VL_OUT8(led1,0,0);
    VL_OUT8(led2,0,0);
    VL_OUT8(led3,0,0);
    VL_OUT8(led4,0,0);
    VL_OUT8(led5,0,0);
    VL_OUT16(rgb,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_key;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_key;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_key;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_key;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__lose;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__status;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__nxt;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__win;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__v_collision;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__h_collision;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_player;
    CData/*2:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__drawing_block;
    CData/*7:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status1;
    CData/*7:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status2;
    CData/*7:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__block_status3;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__drawn;
    CData/*2:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__ball_state;
    CData/*2:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball__DOT__next_ball_state;
    CData/*5:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__paddle_position;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__player_area;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block1_area;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block2_area;
    CData/*0:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block3_area;
    CData/*2:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__rgb;
    CData/*4:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__collision__DOT__num_blocks;
    SData/*9:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__xcnt;
    SData/*9:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt;
    SData/*15:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__color_bar_rgb;
    SData/*9:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_x;
    SData/*9:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__ball_y;
    SData/*9:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__display__DOT__block_hcnt;
    IData/*19:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__up_filter__DOT__cnt_20ms;
    IData/*19:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms;
    IData/*19:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms;
    IData/*19:0*/ DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    CData/*0:0*/ __Vchglast__TOP__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__breakout__DOT__pxl_clk;
    SData/*9:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__ycnt;
    IData/*19:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__down_filter__DOT__cnt_20ms;
    IData/*19:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__left_filter__DOT__cnt_20ms;
    IData/*19:0*/ __Vdly__DevelopmentBoard__DOT__Simple_VGA_inst__DOT__right_filter__DOT__cnt_20ms;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDevelopmentBoard__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDevelopmentBoard);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDevelopmentBoard(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDevelopmentBoard();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VDevelopmentBoard__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDevelopmentBoard__Syms* symsp, bool first);
  private:
    static QData _change_request(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDevelopmentBoard__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VDevelopmentBoard__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDevelopmentBoard__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDevelopmentBoard__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDevelopmentBoard__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__8(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VDevelopmentBoard__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VDevelopmentBoard__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
