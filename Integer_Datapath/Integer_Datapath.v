`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:23:21 02/26/2019 
// Design Name: 
// Module Name:    Integer_Datapath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Integer_Datapath(
    input clk,
    input reset,
    input [4:0] S_Addr,
    input [4:0] FS,
    input HILO_ld,
    input D_En,
    input [4:0] D_Addr,
    input [4:0] T_Addr,
    input [31:0] DT,
    input T_Sel,
    input C,
    input V,
    input N,
    input Z,
    input [31:0] DY,
    input [31:0] PC_in,
    input [2:0] Y_Sel,
    output [31:0] ALU_OUT ,
    output [31:0] D_OUT
    );

    wire [31:0] S_OUT, T_OUT;
    
    //regfile32       (clk, reset, S_Addr, D, D_En, D_Addr, T_Addr, S, T);
    regfile32 register(clk, reset, S_Addr, ALU_OUT, D_En, D_Addr, T_Addr, S_OUT, T_OUT);
    
    
    wire [31:0] T_MUX_OUT;
    //TMUX
    assign T_MUX_OUT = (T_Sel) ? DT : T_OUT;
    
    
    wire [31:0] Y_hi_out, Y_lo_out;
    //ALU_32  (S, T, FS, Y_hi, Y_lo, C, V, N, Z);    
    ALU_32 alu(S_Out, T_MUX_OUT, FS, Y_hi_out, Y_lo_out, C, V, N, Z);    
    
    
    // HI LO
    reg [31:0] HI,LO;
    always @ (posedge clk, posedge reset)
        if (reset) {HI,LO} <= 62'b0;
        else if (HILO_ld) {HI,LO} <= {Y_hi_out,Y_lo_out};
        else {HI,LO} <= {HI,LO};
     
     
    // YMUX
    assign ALU_OUT = (Y_Sel == 3'h0) ? PC_in :
                     (Y_Sel == 3'h1) ? DY    :
                     (Y_Sel == 3'h2) ? Y_lo_out:
                     (Y_Sel == 3'h3) ? LO:
                     (Y_Sel == 3'h4) ? HI:
                                      Y_lo_out;
    
    assign D_OUT = T_MUX_OUT;

endmodule
