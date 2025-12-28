module btn_ctrl(	
	input clk,
	input reset_n,
	input a,
	input b,
	output reg [5:0] ctrl
);
		
always @ (posedge clk or negedge reset_n)begin
	if (!reset_n) begin
		ctrl <= 9;
	end else if (b) begin
		if (ctrl < 19) 
			ctrl <= ctrl + 1'b1; 
		else
			ctrl <= ctrl; 
	end else if (a) begin
		if (ctrl > 1) 
			ctrl <= ctrl - 1'b1; 
		else
			ctrl <= ctrl;
	end
end
	
endmodule
