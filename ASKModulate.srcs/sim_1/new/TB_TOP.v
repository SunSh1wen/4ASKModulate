`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/03 15:14:38
// Design Name: 
// Module Name: TB_TOP
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


module TB_TOP(

    );

    reg sys_clk;
    reg data_clk;
    reg rst_n;
    reg [4:0]data_cnt;
    reg din;

initial begin
    sys_clk = 0;
    forever begin
        #10 sys_clk = ~sys_clk;
    end
end

initial begin
    data_clk = 0;
    forever begin
        #5000 data_clk = ~data_clk;
    end
end

reg [3:0] data [0:7];

initial begin
        $readmemh("F:/SSWPersonalData/Project/Vivado/ASKModulate/ASKModulate.srcs/sim_1/new/din.txt", data);
    end

initial begin
    rst_n = 0;
    #5000 rst_n = 1;
end

always@(posedge data_clk or negedge rst_n)begin
    if(!rst_n)begin
        din = 0;
        data_cnt = 0;
    end

    else begin
        din <=data[data_cnt>>2][3-data_cnt[1:0]];
        data_cnt = data_cnt + 1;
    end
end
TOP #(
) 
U1(
    .sys_clk(sys_clk),
    .rst_n(rst_n),
    .din(din)
);
endmodule
