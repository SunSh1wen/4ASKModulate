`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/02 10:30:25
// Design Name: 
// Module Name: TB_Freq_Driver
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


module TB_Freq_Driver;
    reg sys_clk;
    reg rst_n;

initial begin
    sys_clk = 0;
    forever begin
        #10 sys_clk = ~sys_clk;
    end
end

initial begin
    rst_n = 0;
    #5000 rst_n = 1;
end

Freq_Divider
#(
    .n(4)
) 
U1(
    .clk_in(sys_clk),
    .rst_n(rst_n)
    // .n(3)
);
endmodule
