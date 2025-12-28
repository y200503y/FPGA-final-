module vga( 
    input pxl_clk,
    input reset_n,
    output reg [9:0] hcnt,
    output reg [9:0] vcnt,
    output reg vsync,
    output reg hsync 
);

always @ (posedge pxl_clk or negedge reset_n) begin
    if (!reset_n) hcnt <= 0;
    else if (hcnt <= 799) hcnt <= hcnt + 1'b1;
    else hcnt <= 0;
end

always @ (posedge pxl_clk or negedge reset_n) begin
    if (!reset_n) vcnt <= 0;
    else if(hcnt == 799 && vcnt <= 524) vcnt <= vcnt + 1'b1;
    else if(vcnt <= 524) vcnt <= vcnt;
    else vcnt <= 0;
end

always @ (posedge pxl_clk) begin
    if (hcnt >= 656 && hcnt <= 752) hsync <= 1;
    else hsync <= 0;
end

always @ (posedge pxl_clk)begin
    if (vcnt >= 490 && vcnt <= 492) vsync <= 1;
    else vsync <= 0;
end

endmodule
