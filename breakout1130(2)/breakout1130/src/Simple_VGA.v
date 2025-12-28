module Simple_VGA(
    input clk,
    input reset,
    output hsync,
    output vsync,
    output [15:0] rgb,
    input up,
    input down,
    input left,
    input right,
    output led1,
    output led2,
    output led3,
    output led4,
    output led5
);

wire up_key, down_key, left_key, right_key;
key_filter up_filter(
    .clk(clk),
    .rst_n(reset),
    .key_in(up),
    .key_flag(up_key)
);

key_filter down_filter(
    .clk(clk),
    .rst_n(reset),
    .key_in(down),
    .key_flag(down_key)
);
key_filter left_filter(
    .clk(clk),
    .rst_n(reset),
    .key_in(left),
    .key_flag(left_key)
);
key_filter right_filter(
    .clk(clk),
    .rst_n(reset),
    .key_in(right),
    .key_flag(right_key)
);

wire [15:0] disp_rgb;
wire [9:0] xcnt;
wire [9:0] ycnt;
wire [15:0] color_bar_rgb;
wire lose;
reg status;
reg nxt;

parameter IDLE = 1'b0,
            GAME = 1'b1;

always@(posedge clk or negedge reset) begin
    if(~reset) begin
        status <= IDLE;
    end else begin
        status <= nxt;
    end
end

always@(*) begin
    case(status)
        IDLE: begin
            if(up_key) nxt = GAME;
            else nxt = IDLE;
        end
        GAME: begin
            if(lose) nxt = IDLE;
            else nxt = GAME;
        end
    endcase
end

//color_bar color_bar(
//    .clk(clk),
//    .reset_n(reset),
//    .xcnt(xcnt),
//    .rgb565(color_bar_rgb)
//);

start start(
    .clk(clk),
    .rst_n(reset),
    .xcnt(xcnt),
    .ycnt(ycnt),
    .rgb565(color_bar_rgb)
);

breakout breakout(  
	.clk(clk),
    .reset_n(reset),
	.btn_start(down_key),
    .btn_l(left_key),
    .btn_r(right_key),
	.hcnt(xcnt),
    .vcnt(ycnt),
    .disp_rgb(disp_rgb),
	.lose(lose),
    .hsync(hsync),
    .vsync(vsync)
);

assign rgb = status? disp_rgb : color_bar_rgb;
assign led1 = reset;
assign led2 = up_key;
assign led3 = down_key;
assign led4 = left_key;
assign led5 = right_key;

endmodule