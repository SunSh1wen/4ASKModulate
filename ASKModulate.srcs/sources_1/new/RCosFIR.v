`timescale 1ns / 1ps

module Xilinx_FIR_Guide_liuqi #(
    parameter xinWidth                          = 2 ,
    parameter coeWidth                          = 16,
    parameter firOrder                          = 48,
    parameter youtWidth                         = 22
)
(
	input                                       rst,      
	input                                       clk,      
	input   [xinWidth- 1: 0]                    Xin,       
	output signed [youtWidth - 1:0]             Yout      
);
	parameter ijWidth                           = $clog2(firOrder);
    parameter addRegLenth                       = (firOrder[0:0]== 0)? (firOrder/2 + 1):(firOrder-1)/2 +1 ;

	reg [xinWidth- 1:0]                         Xin_Reg[firOrder :0];  
	reg [ijWidth -1 :0]                         i,j; 
	
	always @(posedge clk or posedge rst)
		if (rst)
			begin 
				for (i=0; i<firOrder +1; i=i+1)
					Xin_Reg[i]= 'd0;
			end
		else
			begin
				for (j=0; j<firOrder +1 ; j=j+1)    
					Xin_Reg[j+1] <= Xin_Reg[j];
                Xin_Reg[0] <= Xin;    
			end
			
	 
	reg [xinWidth:0] Add_Reg[addRegLenth -1 :0];
    
	always @(posedge clk or posedge rst)
		if (rst)
			begin 
				for (i=0; i<addRegLenth; i=i+1)
					Add_Reg[i]='d0;
			end
		else
			begin
				for (i=0; i<addRegLenth; i=i+1)
					Add_Reg[i]= (i != firOrder-i)? Xin_Reg[i] + Xin_Reg[firOrder-i] : Xin_Reg[i];
			end

	 
    wire signed [coeWidth - 1:0]                coe[addRegLenth -1:0] ;   
    wire signed [coeWidth + xinWidth :0]        Mout[addRegLenth -1:0];   

    assign coe[0] ='h0366;
    assign coe[1] ='h06d1;
    assign coe[2] ='h09b7;
    assign coe[3] ='h0b90;
    assign coe[4] ='h0be6;
    assign coe[5] ='h0a6b;
    assign coe[6] ='h070d;
    assign coe[7] ='h01fd;
    assign coe[8] ='hfbb7;
    assign coe[9] ='hf4f9;
    assign coe[10]='heeb3;
    assign coe[11]='he9f0;
    assign coe[12]='he7b4;
    assign coe[13]='he8df;
    assign coe[14]='hee0b;
    assign coe[15]='hf774;
    assign coe[16]='h04e6;
    assign coe[17]='h15bc;
    assign coe[18]='h28e6;
    assign coe[19]='h3d02;
    assign coe[20]='h507e;
    assign coe[21]='h61be;
    assign coe[22]='h6f47;
    assign coe[23]='h77ea;
    assign coe[24]='h7ae1;

    mult_gen_0	Umult0 (
        .CLK (clk),
        .A (coe[0]),
        .B (Add_Reg[0]),
        .P (Mout[0]));
    mult_gen_0	Umult1 (
        .CLK (clk),
        .A (coe[1]),
        .B (Add_Reg[1]),
        .P (Mout[1]));
    mult_gen_0	Umult2 (
        .CLK (clk),
        .A (coe[2]),
        .B (Add_Reg[2]),
        .P (Mout[2]));
    mult_gen_0	Umult3 (
        .CLK (clk),
        .A (coe[3]),
        .B (Add_Reg[3]),
        .P (Mout[3]));
    mult_gen_0	Umult4 (
        .CLK (clk),
        .A (coe[4]),
        .B (Add_Reg[4]),
        .P (Mout[4]));
    mult_gen_0	Umult5 (
        .CLK (clk),
        .A (coe[5]),
        .B (Add_Reg[5]),
        .P (Mout[5]));
    mult_gen_0	Umult6 (
        .CLK (clk),
        .A (coe[6]),
        .B (Add_Reg[6]),
        .P (Mout[6]));
    mult_gen_0	Umult7 (
        .CLK (clk),
        .A (coe[7]),
        .B (Add_Reg[7]),
        .P (Mout[7]));
    mult_gen_0	Umult8 (
        .CLK (clk),
        .A (coe[8]),
        .B (Add_Reg[8]),
        .P (Mout[8]));
    mult_gen_0	Umult9 (
        .CLK (clk),
        .A (coe[9]),
        .B (Add_Reg[9]),
        .P (Mout[9]));
    mult_gen_0	Umult10 (
        .CLK (clk),
        .A (coe[10]),
        .B (Add_Reg[10]),
        .P (Mout[10]));
    mult_gen_0	Umult11 (
        .CLK (clk),
        .A (coe[11]),
        .B (Add_Reg[11]),
        .P (Mout[11]));
    mult_gen_0	Umult12 (
        .CLK (clk),
        .A (coe[12]),
        .B (Add_Reg[12]),
        .P (Mout[12]));
    mult_gen_0	Umult13 (
        .CLK (clk),
        .A (coe[13]),
        .B (Add_Reg[13]),
        .P (Mout[13]));
    mult_gen_0	Umult14 (
        .CLK (clk),
        .A (coe[14]),
        .B (Add_Reg[14]),
        .P (Mout[14]));
    mult_gen_0	Umult15 (
        .CLK (clk),
        .A (coe[15]),
        .B (Add_Reg[15]),
        .P (Mout[15]));
    mult_gen_0	Umult16 (
        .CLK (clk),
        .A (coe[16]),
        .B (Add_Reg[16]),
        .P (Mout[16]));
    mult_gen_0	Umult17 (
        .CLK (clk),
        .A (coe[17]),
        .B (Add_Reg[17]),
        .P (Mout[17]));
    mult_gen_0	Umult18 (
        .CLK (clk),
        .A (coe[18]),
        .B (Add_Reg[18]),
        .P (Mout[18]));
    mult_gen_0	Umult19 (
        .CLK (clk),
        .A (coe[19]),
        .B (Add_Reg[19]),
        .P (Mout[19]));
    mult_gen_0	Umult20 (
        .CLK (clk),
        .A (coe[20]),
        .B (Add_Reg[20]),
        .P (Mout[20]));
    mult_gen_0	Umult21 (
        .CLK (clk),
        .A (coe[21]),
        .B (Add_Reg[21]),
        .P (Mout[21]));
    mult_gen_0	Umult22 (
        .CLK (clk),
        .A (coe[22]),
        .B (Add_Reg[22]),
        .P (Mout[22]));
    mult_gen_0	Umult23 (
        .CLK (clk),
        .A (coe[23]),
        .B (Add_Reg[23]),
        .P (Mout[23]));
    mult_gen_0	Umult24 (
        .CLK (clk),
        .A (coe[24]),
        .B (Add_Reg[24]),
        .P (Mout[24]));
			
	reg signed [youtWidth:0]                    sum;
	reg signed [youtWidth:0]                    yout;
	reg [4:0] k;
	always @(posedge clk or posedge rst)
		if (rst)
			begin 
				sum = 22'd0; 
				yout <= 22'd0;
			end
		else
			begin
			    yout <= sum;
				sum = 22'd0;
				for (k=0; k<addRegLenth; k=k+1)
					sum = sum+Mout[k];
			end
	assign Yout = yout;
			
endmodule
