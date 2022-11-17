`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/17 13:49:23
// Design Name: 
// Module Name: myFFT
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


module myFFT#(
     parameter dataWidth = 24
)
(
    input          clk_in,
    input          rst_n,
    input   [dataWidth-1: 0]CHAN_0_XN_IM_0,
    input   [dataWidth-1: 0]CHAN_0_XN_RE_0,
    output  [dataWidth-1: 0]CHAN_0_XK_RE_0,
    output  [dataWidth-1: 0]CHAN_0_XK_IM_0


);

wire [9 : 0] XK_INDEX;
wire s_axis_config_tready;
wire s_axis_data_tready;
wire m_axis_data_tvalid;
wire m_axis_data_tlast;
wire [23 : 0] m_axis_data_tuser;

wire event_frame_started;
wire event_tlast_unexpected;
wire event_tlast_missing;
wire event_status_channel_halt;
wire event_data_in_channel_halt;
wire event_data_out_channel_halt;


assign XK_INDEX = m_axis_data_tuser[9:0];

xfft_analyze your_instance_name (
  .aclk(clk_in),                                                // input wire aclk
  .aresetn(rst_n),                                          // input wire aresetn
  .s_axis_config_tdata(8'b0000_000_1),                  // input wire [7 : 0] s_axis_config_tdata
  .s_axis_config_tvalid(1'b1),                                   // input wire s_axis_config_tvalid
  .s_axis_config_tready(s_axis_config_tready),                // output wire s_axis_config_tready
  .s_axis_data_tdata({CHAN_0_XN_IM_0,CHAN_0_XN_RE_0}),                      // input wire [47 : 0] s_axis_data_tdata
  .s_axis_data_tvalid(1'b1),                                  // input wire s_axis_data_tvalid
  .s_axis_data_tready(s_axis_data_tready),                    // output wire s_axis_data_tready
  .s_axis_data_tlast(1'b0),                                     // input wire s_axis_data_tlast

  .m_axis_data_tdata({CHAN_0_XK_IM_0,CHAN_0_XK_RE_0}),           // output wire [47 : 0] m_axis_data_tdata
  .m_axis_data_tuser(m_axis_data_tuser),                                 // output wire [23 : 0] m_axis_data_tuser
  .m_axis_data_tvalid(m_axis_data_tvalid),                    // output wire m_axis_data_tvalid
  .m_axis_data_tready(1'b1),                                  // input wire m_axis_data_tready
  .m_axis_data_tlast(m_axis_data_tlast),                      // output wire m_axis_data_tlast
  .m_axis_status_tdata(),                                       // output wire [7 : 0] m_axis_status_tdata
  .m_axis_status_tvalid(m_axis_status_tvalid),                // output wire m_axis_status_tvalid
  .m_axis_status_tready(1'b1),                                // input wire m_axis_status_tready

  .event_frame_started(event_frame_started),                                    // output wire event_frame_started
  .event_tlast_unexpected(event_tlast_unexpected),                             // output wire event_tlast_unexpected
  .event_tlast_missing(event_tlast_missing),                                   // output wire event_tlast_missing
  .event_status_channel_halt(event_status_channel_halt),                          // output wire event_status_channel_halt
  .event_data_in_channel_halt(event_data_in_channel_halt),                          // output wire event_data_in_channel_halt
  .event_data_out_channel_halt(event_data_out_channel_halt)                          // output wire event_data_out_channel_halt
);      

endmodule


