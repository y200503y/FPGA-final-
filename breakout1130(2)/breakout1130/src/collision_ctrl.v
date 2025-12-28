  `include "defines.v"                        

module collision_ctrl( 
    input pxl_clk,
    input reset_n,
    input [9:0] vcnt,
    input [9:0] hcnt,
    input [9:0] ball_x,
    input [9:0] ball_y,
    input vsync,
    input start,
    input drawing_player,
    input [2:0] drawing_block,
    output reg win,
    output reg lose,
    output [3:0] block_num,
    output reg [7:0] blk1,
    output reg [7:0] blk2,
    output reg [7:0] blk3,
    output reg h_collision,
    output reg v_collision 
);

    reg [4:0] num_blocks;
    reg [9:0] block_addr;
    wire [9:0] block_hcnt = hcnt - `blocks_h0;
    
    always @ (posedge pxl_clk or negedge reset_n) begin
        if (!reset_n) begin
            v_collision <= 0;
            h_collision <= 0;
            win <= 0;
            lose <= 0;
            num_blocks <= 0;
            blk1 <= 0;
            blk2 <= 0;
            blk3 <= 0;
        end else if(start) begin
            num_blocks <= 24;
            blk1 <= 8'hff;
            blk2 <= 8'hff;
            blk3 <= 8'hff;
        end else if (~vsync) begin
            if (drawing_player) begin
                if (ball_x == hcnt && ball_y- 3 <= vcnt && ball_y + 3 >= vcnt) v_collision <= 1;
                else v_collision <= 0;
            end else if (drawing_block[0]) begin
                if (ball_x == hcnt && ball_y - 10 <= vcnt && ball_y + 10 >= vcnt & blk1[block_hcnt[8:6]]) begin
                    v_collision <= 1;
                    blk1[block_hcnt[8:6]] <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end else if (ball_y == vcnt && ball_x - 5 <= hcnt && ball_x + 5 >= hcnt & blk1[block_hcnt[8:6]]) begin
                    h_collision <= 1;
                    blk1[block_hcnt[8:6]] <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end  else begin
                    v_collision <= 0;
                    h_collision <= 0;
                end
            end else if (drawing_block[1]) begin
                if (ball_x == hcnt && ball_y - 1 <= vcnt && ball_y + 10 >= vcnt & blk2[block_hcnt[8:6]]) begin
                    v_collision <= 1;
                    blk2[block_hcnt[8:6]]  <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end else if (ball_y == vcnt && ball_x - 5 <= hcnt && ball_x + 5 >= hcnt & blk2[block_hcnt[8:6]])  begin
                    h_collision <= 1;
                    blk2[block_hcnt[8:6]]  <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end  else  begin
                    v_collision <= 0;
                    h_collision <= 0;
                end
            end else if (drawing_block[2]) begin
                if (ball_x == hcnt && ball_y - 1 <= vcnt && ball_y + 10 >= vcnt & blk3[block_hcnt[8:6]]) begin
                    v_collision <= 1;
                    blk3[block_hcnt[8:6]]  <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end else if (ball_y == vcnt && ball_x - 5 <= hcnt && ball_x + 5 >= hcnt & blk3[block_hcnt[8:6]]) begin
                    h_collision <= 1;
                    blk3[block_hcnt[8:6]]  <= 0;
                    num_blocks <= num_blocks - 1;
                    if (num_blocks == 1) win <= 1;
                end else begin
                    v_collision <= 0;
                    h_collision <= 0;
                end
            end 
        end else begin
            if (ball_y + 5 >= `bottom_edge) lose <= 1;
        end
            
    end
endmodule