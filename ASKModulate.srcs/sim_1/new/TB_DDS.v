`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/03 10:19:17
// Design Name: 
// Module Name: TB_DDS
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

module TB_DDS;

  // Generate clock
    reg sys_clk;
    initial begin
        sys_clk = 0;
    // 50MHz input sys_clk
        forever begin
            #10 sys_clk = ~sys_clk;
        end

    end 
    // Input registers
    reg reset, load;
    reg [14:0] fcw;
    // Output wires
    wire out_valid;
    wire [11:0] out;
    // TB Variable

    wire [14:0] lut_addr;
    wire [11:0] lut_data;
    reg [11:0] lut_mem [0:32768];
    
    initial begin
        $readmemb("F:/SSWPersonalData/Project/Vivado/ASKModulate/ASKModulate.srcs/sim_1/new/code_lut.txt", lut_mem);
    end

    assign lut_data = lut_mem[lut_addr];

    initial begin
        reset = 0;
        load = 0;
        fcw = 0;
        #5000
        reset = 1;
        load = 1;
        fcw = 1;

    end

    // Device under test (our adder)
    DDS U1 (.rst_n(reset), .clk(sys_clk), .fcw(fcw), .load(load), .out(out), .out_valid(out_valid), .lut_data(lut_data), .lut_addr(lut_addr));

endmodule

