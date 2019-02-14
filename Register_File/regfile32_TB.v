`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:09:08 02/14/2019
// Design Name:   regfile32
// Module Name:   C:/Users/Rosswell/Documents/_440/ISA_440/Register_File/regfile32_TB.v
// Project Name:  Register_File
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regfile32
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regfile32_TB;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] S_Addr;
	reg [31:0] D;
	reg D_En;
	reg [4:0] D_Addr;
	reg [4:0] T_Addr;

	// Outputs
	wire [31:0] S;
	wire [31:0] T;

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
    
    integer i; 
    reg [31:0] memory [31:0];
    always #5 clk = ~clk;	

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		S_Addr = 0;
		D = 0;
		D_En = 0;
		D_Addr = 0;
		T_Addr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        // Wait 100 ns for global reset to finish
		#100;
        //One time reset assertion
		@ (negedge clk) reset = 1'b1;
		@ (negedge clk) reset = 1'b0;
        
        // Initializing registers
        $readmemh("IntReg_Lab2.dat",memory);
        //$timeformat [ ( units_number , precision_number , suffix_string , minimum_field_width ) ] ;
        $timeformat(-9,3,"ns",5);

        reg_dump;
        reg_write;
        reg_dump;   

	end  


task reg_dump;
    for (i = 0; i < 16; i = i + 1)begin
        //Assigning ALL INPUTS on the negative edge of clk
        @ (negedge clk) begin
            reset = 0;
            D_En = 0;
            S_Addr = i;
            T_Addr = S_Addr + 16;
        end
        //Reading values on the positive edge of clk
        @ (posedge clk)
            #1 $display("Time %t, S_Addr, %5h || T_Addr, %5h", 
                        $time, S_Addr, S, T_Addr, T);
    end
endtask

task reg_write;
    //Writing pattern to the register file
    for (i = 1; i < 31; i = i + 1) begin
    //Assigning ALL INPUTS on the negative edge of clk
    @ (negedge clk)
        D_Addr = i;
        D = ((~i) << 8 ) + (-65536 * i ) + i;
        S_Addr = 0;  T_Addr = 0;
        D_En = 1; ; reset = 0;
    end
endtask


endmodule 