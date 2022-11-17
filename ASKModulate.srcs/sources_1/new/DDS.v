`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/03 09:39:50
// Design Name: 
// Module Name: DDS
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

module  DDS #(
    parameter FCW_W = 15, // 相位寄存器位宽
    parameter LUT_A_W = 15, // 查找表地址位宽
    parameter LUT_W = 12 // 查找表输出幅度位宽
)(
    input rst_n,
    input clk,
    input load,
    input [FCW_W - 1:0] fcw,

    output reg [LUT_W - 1:0] out,
    output reg out_valid,

    input [LUT_W - 1 : 0] lut_data,
    output [LUT_A_W - 1 : 0] lut_addr
);

    reg [FCW_W-1:0] phase_acc;
    reg [FCW_W-1:0] fcw_reg;

    // 将高 `LUT_A_W` 位连接到查找表地址输入
    assign lut_addr = phase_acc;

    always @(posedge clk) begin //: proc_main
        if(~rst_n) begin
            phase_acc <= 0;
            fcw_reg <= 0;
            out_valid <= 0;
            out <= 'bx; // 未知值，仅在仿真中使用
        end
        else begin
            if (load) begin
                fcw_reg <= fcw;
            end

            if (fcw_reg != 0) begin
                // 在 fcw 非 0 时自动输出波形
                phase_acc <= phase_acc + fcw_reg;
                out <= lut_data;
                out_valid <= 1;
            end 

            else begin
                out <= 'bx;
                out_valid <= 0;
            end
        end
    end
endmodule