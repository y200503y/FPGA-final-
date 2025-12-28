module start( 
    input   clk,
    input   rst_n,
    input  	[9:0]  xcnt,
    input  	[9:0]  ycnt,

    output reg [15:0] rgb565
);

always@(posedge clk) begin
    if(~rst_n) begin
        rgb565 <= 'h0;
    end else begin
        if(ycnt == 200) begin
            if(xcnt >=120 & xcnt < 160) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=200 & xcnt < 240) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=280 & xcnt < 320) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=360 & xcnt < 400) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=440 & xcnt < 480) begin
                rgb565 <= 16'hffff;
            end else begin
                rgb565 <= 'h0;
            end
        end else if(ycnt > 200 & ycnt <= 220) begin
            if(xcnt == 120) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 220) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 280 | xcnt == 319) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 360 | xcnt == 399) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 460) begin
                rgb565 <= 16'hffff;
            end else begin
                rgb565 <= 'h0;
            end
        end else if(ycnt == 221) begin
            if(xcnt >=120 & xcnt < 160) begin
                rgb565 <= 16'hffff;
            end else if(xcnt ==220) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=280 & xcnt < 320) begin
                rgb565 <= 16'hffff;
            end else if(xcnt >=360 & xcnt < 400) begin
                rgb565 <= 16'hffff;
            end else if(xcnt ==460) begin
                rgb565 <= 16'hffff;
            end else begin
                rgb565 <= 'h0;
            end
        end else if(ycnt > 221 & ycnt <= 240) begin
            if(xcnt == 159) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 220) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 280 | xcnt == 319) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 360) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 360 + (ycnt - 221)*2) begin
                rgb565 <= 16'hffff;
            end else if(xcnt == 460) begin
                rgb565 <= 16'hffff;
            end else begin
                rgb565 <= 'h0;
            end
        end else if(ycnt == 241) begin
            if(xcnt >=120 & xcnt < 160) begin
                rgb565 <= 16'hffff;
            end else if(xcnt ==220) begin
                rgb565 <= 16'hffff;
            end else if(xcnt ==460) begin
                rgb565 <= 16'hffff;
            end else begin
                rgb565 <= 'h0;
            end
        end else begin
            rgb565 <= 'h0;
        end
    end
end

endmodule



