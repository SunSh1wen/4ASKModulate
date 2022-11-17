`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/03 22:19:17
// Design Name: 
// Module Name: Scramber
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


module Scrambler(
    input wire reset,
    input wire clk,
    input wire din,
    input wire din_valid,
    // 以下用了 [7:1] 这种表示方法
    // 在调用这个模块时，只要输入的位宽也为 6，是可以自动对齐的
    input wire [7:1] seed,
    // 在这里直接将 dout 定义为 reg 类型，等效于声明一个 reg，然后将输出信号 assign 到这个 reg 类型上
    output reg dout, 
    output reg dout_valid
    );

    // 与 [6:0] 申明的位宽一致，但索引不一致，这样声明最低位的索引是 1
    reg [7:1] shift_register; 
    wire feedback;

    // shift_register 的索引从 1 开始，可以直接对应生成多项式系数
    assign feedback = shift_register[4] ^ shift_register[7]; 

    // 这是异步复位的写法，若同步复位则无 negedge reset
    always @(posedge clk or negedge reset) begin
        if(!reset) begin
            // 如果复位信号有效，则其他什么事都不做，只完成寄存器的初始化
            dout <= 0;
            shift_register <= 0;
            dout_valid <= 0;
            shift_register <= seed;
        end 

        else begin
            // 以下代码在不复位时生效
            if (din_valid) begin
                shift_register <= {shift_register[6:1], feedback};  
                dout <= feedback ^ din; 
                dout_valid <= 1; 
            end 
            else begin 
                dout <= 0;
                dout_valid <= 0;
            end

        end
    end
    
endmodule