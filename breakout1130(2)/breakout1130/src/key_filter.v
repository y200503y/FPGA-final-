module key_filter
#(
parameter CNT_MAX = 20'd2
)(
input clk ,
input rst_n ,
input key_in ,

output reg key_flag

);

reg [19:0] cnt_20ms ;

always@(posedge clk or negedge rst_n) begin
    if(rst_n == 1'b0)
        cnt_20ms <= 20'b0;
    else if(key_in == 1'b1)
        cnt_20ms <= 20'b0;
    else if(cnt_20ms == CNT_MAX && key_in == 1'b0)
        cnt_20ms <= cnt_20ms;
    else
        cnt_20ms <= cnt_20ms + 1'b1;
end        

always@(posedge clk or negedge rst_n) begin
    if(rst_n == 1'b0)
        key_flag <= 1'b0;
    else if(cnt_20ms == CNT_MAX - 1'b1)
        key_flag <= 1'b1;
    else
        key_flag <= 1'b0;
end

endmodule