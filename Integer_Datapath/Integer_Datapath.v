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
 * Purpose: The Register File is the component that contains the "user
 *          registers" for the processor. Writing is done synchronously to
 *			the clock, whereas reading is done asynchronously. The core
 *			memory is a 32 wide by 32 deep register array
 *         
 * Notes: 
 *
 ****************************************************************************/
module Integer_Datapath(clk, reset, D_En, D_Addr, S_Addr, FS, HILO_ld, T_Addr,
								DT,T_Sel,DY,PC_in,Y_Sel,C,V,N,Z,ALU_OUT,D_OUT);
	input clk, reset;
	input HILO_ld, D_En, T_Sel;
	input [2:0] Y_Sel;
	input [4:0] S_Addr, FS, D_Addr, T_Addr;
	input [31:0] DT, DY, PC_in;
	output reg C,V,N,Z;
	output reg [31:0] ALU_OUT, D_OUT;


	// Register file
	regfile32  register (.clk(clk), .reset(reset), .S_Addr(S_Addr),
								.D(ALU_OUT) , .D_En(D_En), .D_Addr(D_Addr),
								.T_Addr(T_Addr), .S(S_out), .T(T_out));
	wire [31:0] S_out, T_out;

	// T-MUX
	assign D_OUT = (T_Sel) ? DT: T_out;

	// ALU
	ALU_32 alu (.S(S_out), .T(D_OUT), .FS(FS), .Y_hi(Y_hi), .Y_lo(Y_lo), .C(C), .V(V), .N(N), .Z(Z));
	wire [31:0] Y_hi, Y_lo;
	
	
	// HI & LO registers
	reg [31:0] HI, LO;
	always @ (posedge clk, posedge reset)
		if (reset) {HI,LO} <= 64'b0;
		else if (HILO_ld) {HI,LO} <= {Y_hi,Y_lo};
		else {HI,LO} <= {HI,LO};


	// Y-MUX
	assign ALU_OUT =         (Y_Sel == 3'h8) ?  HI :
							 (Y_Sel == 3'h7) ?  LO :
							 (Y_Sel == 3'h6) ? Y_lo:
							 (Y_Sel == 3'h5) ?  DY :
							 (Y_Sel == 3'h4) ?PC_in:
											  32'b0;

endmodule
