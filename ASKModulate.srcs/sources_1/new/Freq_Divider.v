`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/02 09:57:09
// Design Name: 
// Module Name: Freq_Divider
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Freq_Divider #
(	parameter n = 7	)
(
	input	clk_in	,
	input	rst_n	,

	output	clk_out
);

parameter CNT_BITS = $clog2(n)	;
parameter CNT_MAX  = n - 1		;

reg [CNT_BITS: 0]	cnt_r, cnt_f;
reg					clk_r, clk_f;

// --- posedge clk --- //
always @ (posedge clk_in or negedge rst_n) begin
	if (~rst_n)
		cnt_r <= 0;
	else
		cnt_r <= (cnt_r == CNT_MAX)? 0: (cnt_r + 1'b1);
end

always @ (posedge clk_in or negedge rst_n) begin
	if (~rst_n)
		clk_r <= 0;
	else if(n[0:0] == 1)
		clk_r <= ((cnt_r == CNT_MAX >> 1) || (cnt_r == CNT_MAX))? ~clk_r: clk_r;
	else begin
		clk_r <= ((cnt_r == CNT_MAX >> 1 - 1) || (cnt_r == CNT_MAX))? ~clk_r: clk_r;
	end
end

// --- negedge clk --- //
always @ (negedge clk_in or negedge rst_n) begin
	if (~rst_n)
		cnt_f <= 0;
	else
		cnt_f <= (cnt_f == CNT_MAX)? 0: (cnt_f + 1'b1);
end

always @ (negedge clk_in or negedge rst_n) begin
	if (~rst_n)
		clk_f <= 0;
	else
		clk_f <= ((cnt_f == CNT_MAX >> 1) || (cnt_f == CNT_MAX))? ~clk_f: clk_f;
end

assign clk_out = (n[0:0] == 1)? (clk_r | clk_f) : clk_r;

endmodule
