`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/04 10:35:48
// Design Name: 
// Module Name: ASKMOD
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


module ASKMOD#(
    parameter cos_w = 12,
    parameter din_w = 2
)
(
    input rst_n,
    input signed [din_w :0]din,//拓展一位用作符号位，用于无符号数输入
    input signed [cos_w-1 :0]cos,
    output signed [din_w + cos_w -1 : 0]dout
    );

assign dout = (rst_n==1)? din*cos: 0;    
endmodule
