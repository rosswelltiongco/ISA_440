`timescale 1ns / 1ps
/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  Integer_Datapath.v
 * Project:    Lab_Assignment_3
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose: The integer datapath is a wrapper module instantiating a
 *          register file and alu. The integer datapath also includes
 *          combinational logic for a T and Y Mux. Finally, HI and LO
 *          registers are used to capture outputs for multiplication
 *          and division 
 *         
 * Notes: 
 *
 ****************************************************************************/
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
    output C,
    output V,
    output N,
    output Z,
    input [31:0] DY,
    input [31:0] PC_in,
    input [2:0] Y_Sel,
    output [31:0] ALU_OUT ,
    output [31:0] D_OUT
    );
	 
	 // REGISTER FILE
    //regfile32       (clk, reset, S_Addr, D,       D_En, D_Addr, T_Addr, S,     T);
    regfile32 register(clk, reset, S_Addr, ALU_OUT, D_En, D_Addr, T_Addr, S_OUT, T_OUT);
    wire [31:0] S_OUT, T_OUT;
    
    
    // TMUX - Selects DT when T_Sel is asserted
    assign T_MUX_OUT = (T_Sel) ? DT : T_OUT;
    wire [31:0] T_MUX_OUT;
    
    
    //ALU_32  (S,     T,         FS, Y_hi,     Y_lo,     C, V, N, Z);    
    ALU_32 alu(S_OUT, T_MUX_OUT, FS, Y_hi_out, Y_lo_out, C, V, N, Z);    
    wire [31:0] Y_hi_out, Y_lo_out;
    
    // HI LO REGISTERS
    reg [31:0] HI,LO;
    always @ (posedge clk, posedge reset)
        if (reset) {HI,LO} <= 62'b0;
        else if (HILO_ld) {HI,LO} <= {Y_hi_out,Y_lo_out};
        else {HI,LO} <= {HI,LO};
     
     
    // YMUX - Chooses ALU_OUT based on Y_Sel
    assign ALU_OUT = (Y_Sel == 3'h0) ? PC_in :
                     (Y_Sel == 3'h1) ? DY    :
                     (Y_Sel == 3'h2) ? Y_lo_out:
                     (Y_Sel == 3'h3) ? LO:
                     (Y_Sel == 3'h4) ? HI:
                                      Y_lo_out;
    
    // Continuous assignment statement
    assign D_OUT = T_MUX_OUT;

endmodule
