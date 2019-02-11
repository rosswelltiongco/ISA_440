`timescale 1ns / 1ps
/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  regfile32_TB.v
 * Project:    Lab_Assignment_2
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose: Provides stimulus to the register file design
 *         
 * Notes:
 *
 ****************************************************************************/

module regfile32_TB;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] S_Addr;
	reg [31:0] D;
	reg D_En;
	reg [4:0] D_Addr;
	reg [4:0] T_Addr;
	reg S;
	reg T;

	// Instantiate the Unit Under Test (UUT)
	regfile32 uut (
		.clk(clk), 
		.reset(reset), 
		.S_Addr(S_Addr), 
		.D(D), 
		.D_En(D_En), 
		.D_Addr(D_Addr), 
		.T_Addr(T_Addr), 
		.S(S), 
		.T(T)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		S_Addr = 0;
		D = 0;
		D_En = 0;
		D_Addr = 0;
		T_Addr = 0;
		S = 0;
		T = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        
        
        
        // Initializing registers
        $readmemh("IntReg_Lab2.dat",memory);
        //$timeformat [ ( units_number , precision_number , suffix_string , minimum_field_width ) ] ;
        $timeformat(-9,3,"ns",5);
        
        // Verification Section
        // 1) Displaying initial contents of all 32 registers AFTER $readmemh
        // 2) Using D input with D_Addr to write new patterns
        // 3) Displayingupdated results
        
       
        
	end
    

task reg_dump;
    for (int i = 0; i < 15; i = i + 1)begin
        @ (negedge clk) begin
            reset = 0;
            D_En = 0;
            S_Addr = 0;
            R_Addr = S_Addr + 16;
        end
        @ (posedge clk)
            #1 display("Time %t, S_Addr, %5'h || T_Addr, %5'h", $time, S_Addr, S, T_Addr,T);
    
    end
endtask

task write_Patterns;
endtask

endmodule


