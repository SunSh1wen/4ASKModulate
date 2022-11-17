`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/04 09:20:16
// Design Name: 
// Module Name: 1Bto2B
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


module OneBittoTwoBit(
    input clk_in,
    input rst_n,
    input din,
    output [1:0] dout
    );
reg cnt;
reg [1:0]data_temp;

assign dout = (cnt==1)? dout : data_temp;

always@(posedge clk_in or negedge rst_n)begin
    if(!rst_n) begin
        // dout = 0;  
        data_temp = 0;  
        cnt = 0;
    end
    else begin
        data_temp = {data_temp[0], din};
        cnt = cnt + 1'b1;
    end
end    
endmodule
