`include "defines.v"
    
module display_ctrl(   
    input pxl_clk,
    input reset_n,
    input [9:0] hcnt,
    input [9:0] vcnt,
    input [9:0] ball_y,
    input [9:0] ball_x,
    input  btn_l,
    input  btn_r,
    input [3:0] block_num,
    input vsync,
    input lose,
    input win,
    input [7:0] block_status1,
    input [7:0] block_status2,
    input [7:0] block_status3,
    output reg drawing_player,
    output reg [2:0] drawing_block,
    output reg [15:0] disp_rgb
);

    wire [5:0] paddle_position;
    reg [9:0] block_vcnt;
    reg [9:0] block_hcnt;
    reg [2:0] rgb_block;
    wire ball_area = (vcnt < ball_y + 3 && vcnt > ball_y - 3 && hcnt < ball_x + 3 && hcnt > ball_x - 3);
    wire player_area = (vcnt > `player_v0 && 
                        vcnt < `player_v1 && 
                        hcnt > (paddle_position << 5) - `player_hlength + `left_edge && 
                        hcnt < ((paddle_position << 5) + `player_hlength + `left_edge) );
    wire block1_area = vcnt > `blocks_v00 && vcnt <= `blocks_v01 && hcnt > `blocks_h0 && hcnt <= `blocks_h1;
    wire block2_area = vcnt > `blocks_v10 && vcnt <= `blocks_v11 && 
                       hcnt > `blocks_h0 && hcnt <= `blocks_h1;
    wire block3_area = vcnt > `blocks_v20 && vcnt <= `blocks_v21 && 
                       hcnt > `blocks_h0 && hcnt <= `blocks_h1;
    reg [2:0] rgb;

    always@(*) begin
        block_vcnt[9:0] = vcnt - `blocks_v00;
        block_hcnt[9:0] = hcnt - `blocks_h0;

        rgb_block = 0;
        if(block1_area) begin
            rgb_block = block_status1[block_hcnt[8:6]] ? block_hcnt[8:6] : 0;
        end else if(block2_area) begin
            rgb_block = block_status2[block_hcnt[8:6]] ? block_hcnt[8:6] : 0;
        end else if(block3_area) begin
            rgb_block = block_status3[block_hcnt[8:6]] ? block_hcnt[8:6] : 0;
        end
    end

    always@(posedge pxl_clk or negedge reset_n) begin
        if(~reset_n)
            drawing_player <= 0;
        else if(player_area)
            drawing_player <= 1;
        else
            drawing_player <= 0;
    end


    always@(posedge pxl_clk or negedge reset_n) begin
        if(~reset_n)
            drawing_block <= 0;
        else if(block1_area)
            drawing_block <= 3'd1;
        else if(block2_area)
            drawing_block <= 3'd2;
        else if(block3_area)
            drawing_block <= 3'd4;
        else
            drawing_block <= 0;
    end

    always@(posedge pxl_clk or negedge reset_n) begin
        if(~reset_n)
            rgb <= 3'd0;
        else if (hcnt > `screen_right || vcnt > `screen_bottom) rgb <= 3'b000;
        
        else if (win | lose) rgb <= `red;
        
        else if (ball_area) rgb <= `white;
        
        else if (player_area) rgb <= `white;

        else if (block1_area)
            rgb <= block_status1[block_hcnt[8:6]] ? `yellow : 0;

        else if (block2_area)
            rgb <= block_status2[block_hcnt[8:6]] ? `yellow : 0;

        else if (block3_area)
            rgb <= block_status3[block_hcnt[8:6]] ? `yellow: 0;
        
        else rgb <= `black;
    end
    
    btn_ctrl btn_ctrl(
        .clk(pxl_clk),
        .reset_n(reset_n),
        .a(btn_l),
        .b(btn_r),
        .ctrl(paddle_position) 
    );

    assign disp_rgb = {{5{rgb[2]}},{6{rgb[1]}},{5{rgb[0]}}};

endmodule