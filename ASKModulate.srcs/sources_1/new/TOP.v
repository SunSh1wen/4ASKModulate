module TOP (
    input sys_clk,
    input rst_n,
    input din
);
  
wire data_clk;
//分频模块    
Freq_Divider
#(
    .n(500)
) 
Freq_Divider1(
    .clk_in(sys_clk),
    .rst_n(rst_n),
    .clk_out(data_clk) //50MHz 500分频 100KHz
);

wire fir_clk;
//分频模块    
Freq_Divider
#(
    .n(50)
) 
Freq_Divider2(
    .clk_in(sys_clk),
    .rst_n(rst_n),
    .clk_out(fir_clk) //50MHz 40分频 1000KHz
);

wire data_valid;
wire Scrambler_out;

Scrambler Scrambler(
    .reset(rst_n),
    .clk(data_clk),
    .din(din),
    .din_valid(1'b1),
    // 以下用了 [7:1] 这种表示方法
    // 在调用这个模块时，只要输入的位宽也为 6，是可以自动对齐的
    .seed(7'b1011101),
    // 在这里直接将 dout 定义为 reg 类型，等效于声明一个 reg，然后将输出信号 assign 到这个 reg 类型上
    . dout(Scrambler_out), 
    . dout_valid(data_valid)
);

wire [1:0]TwoBit_out;
OneBittoTwoBit OneBittoTwoBit(
    .clk_in(data_clk),
    .rst_n(rst_n),
    .din(Scrambler_out),
    .dout(TwoBit_out)  //50KHz
    );  

wire [11:0] cosine;
wire out_valid;
wire [11:0] lut_data;
wire [14:0] lut_addr;
reg [11:0] lut_mem [0:32768];

wire signed [21:0]Yout;
Xilinx_FIR_Guide_liuqi #(

)
RCosFIR(
    .rst(!rst_n),                   //复位信号，高电平有效
	.clk(fir_clk),                  //FPGA系统时钟，频率为2kHz
	.Xin(TwoBit_out),               //数据输入频率为2khZ
	.Yout(Yout)                    //滤波后的输出数据
    );

//不可综合 待修改
initial begin

    $readmemb("F:/SSWPersonalData/Project/Vivado/ASKModulate/ASKModulate.srcs/sim_1/new/code_lut.txt", lut_mem);
end

assign lut_data = lut_mem[lut_addr];

DDS COS(
    .rst_n(rst_n),
    .clk(sys_clk),
    .load(1'b1),
    .fcw(655), //1MHz
    .out(cosine),
    .out_valid(out_valid),
    .lut_data(lut_data),
    .lut_addr(lut_addr)
);

wire [13:0]FourASK_out;

ASKMOD FourASK(
    .rst_n(rst_n),
    .din(Yout),
    .cos(cosine),
    .dout(FourASK_out)
);


wire   [23: 0]fftAfterFir_XN_IM_0;
wire   [23: 0]fftAfterFir_XN_RE_0;
myFFT fftAfterFir(
    .clk_in(fir_clk),
    .rst_n(rst_n),
    .CHAN_0_XN_IM_0(24'b0),
    .CHAN_0_XN_RE_0({Yout[21:21],Yout[21:21], Yout}),
    .CHAN_0_XK_RE_0(fftAfterFir_XN_RE_0),
    .CHAN_0_XK_IM_0(fftAfterFir_XN_IM_0)
);

wire   [23: 0]fftBeforeFir_XN_IM_0;
wire   [23: 0]fftBeforeFir_XN_RE_0;
myFFT fftBeforeFir(
    .clk_in(fir_clk),
    .rst_n(rst_n),
    .CHAN_0_XN_IM_0(24'b0),
    .CHAN_0_XN_RE_0({22'b0, TwoBit_out}),
    .CHAN_0_XK_RE_0(fftBeforeFir_XN_RE_0),
    .CHAN_0_XK_IM_0(fftBeforeFir_XN_IM_0)
);

endmodule