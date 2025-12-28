`include "defines.v"                 

module breakout(  
    input  clk,
    input  reset_n,
    input  btn_start,
    input  btn_l,
    input  btn_r,
    input  status,

    output [9:0] hcnt,
    output [9:0] vcnt,
    output [15:0] disp_rgb,
    output lose,
    output hsync,
    output vsync
);
                    
    reg pxl_clk;
    wire win;
    wire [9:0] ball_x;
    wire [9:0] ball_y;
    wire [3:0] block_num;
    wire v_collision;
    wire h_collision;

    wire drawing_player;
    wire [2:0] drawing_block;  
    wire [7:0] block_status1;
    wire [7:0] block_status2;
    wire [7:0] block_status3;
    
    always@(posedge clk) begin
        if(~reset_n)
            pxl_clk <= 0;
        else 
            pxl_clk <= ~pxl_clk;
    end                    
    
    vga vga(   
        .pxl_clk(pxl_clk),
        .reset_n(reset_n),
        .hcnt(hcnt),
        .vcnt(vcnt),
        .vsync(vsync),
        .hsync(hsync)   
    );


    ball_ctrl ball(   
        .pxl_clk(pxl_clk),
        .reset_n(reset_n),
        .vsync(vsync),
        .h_collision(h_collision),
        .v_collision(v_collision),
        .start(btn_start),
        .ball_x(ball_x),
        .ball_y(ball_y) 
    );
                            
    display_ctrl display(   
        .pxl_clk(pxl_clk),
        .reset_n(reset_n),
        .hcnt(hcnt),
        .vcnt(vcnt),
        .ball_y(ball_y),
        .ball_x(ball_x),
        .btn_l(btn_l),
        .btn_r(btn_r),
        .block_num(block_num),
        .lose(lose),
        .win(win),
        .vsync(vsync),
        .block_status1(block_status1),
        .block_status2(block_status2),
        .block_status3(block_status3),
        .drawing_player(drawing_player),
        .drawing_block(drawing_block),
        .disp_rgb(disp_rgb)    
    );
                                        

    collision_ctrl collision( 
        .pxl_clk(pxl_clk),
        .reset_n(reset_n),
        .start(btn_start),
        .vcnt(vcnt),
        .hcnt(hcnt),
        .ball_x(ball_x),
        .ball_y(ball_y),
        .vsync(vsync),
        .drawing_player(drawing_player),
        .drawing_block(drawing_block),
        .win(win),
        .lose(lose),
        .block_num(block_num),
        .blk1(block_status1),
        .blk2(block_status2),
        .blk3(block_status3),
        .h_collision(h_collision),
        .v_collision(v_collision)    
    );
    

endmodule
    
    
