`timescale 1ns / 1ps

/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  Integer_Datapath_tb.v
 * Project:    Lab_Assignment_3
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose: Provides stimulus for the integer datapath by initializing 
 *          registers 0-15. Registers 16-31 are not being used. Next,
 *          multiple micro-operations are performed to test the alu
 *         
 * Notes: 
 *
 ****************************************************************************/
module Integer_Datapath_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [4:0] S_Addr;
	reg [4:0] FS;
	reg HILO_ld;
	reg D_En;
	reg [4:0] D_Addr;
	reg [4:0] T_Addr;
	reg [31:0] DT;
	reg T_Sel;
	reg [31:0] DY;
	reg [31:0] PC_in;
	reg [2:0] Y_Sel;

	// Outputs
	wire C;
	wire V;
	wire N;
	wire Z;
	wire [31:0] ALU_OUT;
	wire [31:0] D_OUT;
	

	// Instantiate the Unit Under Test (UUT)
	Integer_Datapath uut (
		.clk(clk), 
		.reset(reset), 
		.S_Addr(S_Addr), 
		.FS(FS), 
		.HILO_ld(HILO_ld), 
		.D_En(D_En), 
		.D_Addr(D_Addr), 
		.T_Addr(T_Addr), 
		.DT(DT), 
		.T_Sel(T_Sel), 
		.C(C), 
		.V(V), 
		.N(N), 
		.Z(Z), 
		.DY(DY), 
		.PC_in(PC_in), 
		.Y_Sel(Y_Sel), 
		.ALU_OUT(ALU_OUT), 
		.D_OUT(D_OUT)
	);

	// Testbench variables
	always #5 clk = ~clk;
	integer i;
	reg [31:0] memory [31:0];
	
	
	initial begin
		// Initialize Inputs
		// Display time in nanoseconds
		$timeformat(-9, 1, " ps", 9);
		clk = 0;
		reset = 0;
		S_Addr = 0;
		FS = 0;
		HILO_ld = 0;
		D_En = 0;
		D_Addr = 0;
		T_Addr = 0;
		DT = 0;
		T_Sel = 0;
		DY = 0;
		PC_in = 0;
		Y_Sel = 0;
		@(negedge clk) reset = 1;
		@(negedge clk) reset = 0;

		reg_Init();
		reg_Dump();
		do_Ops();
		reg_Dump();


	end
	
	
task reg_Dump; begin
	$display("\nPERFORMING REGISTER DUMP\n");
	@(negedge clk) begin
		// ALL INPUTS must be assigned
		S_Addr = 5'h0;
		FS = 5'h0;
		HILO_ld = 1'h0;
		D_En = 1'h0;
		D_Addr = 5'h0;
		T_Addr = 5'h0;
		DT = 32'h0;
		T_Sel = 1'h0;
		DY = 32'h0;
		PC_in = 32'h0;
		Y_Sel = 3'h2;
		
		for (i=0; i<16; i=i+1) begin
			@(negedge clk)
				$display("t = %t || S_Addr: %h|| ALU_OUT: %h", 
							$time,    S_Addr,           ALU_OUT);
			S_Addr = i + 1;
		end
	end
	$display(" ");
	end
endtask
	
	
	
task reg_Init; begin
	// Initialize registers by passing T and loading DT
	$display("\nPERFORMING REGISTER INITIALIZATION\n");
	$readmemh("IntReg_Lab3.dat", memory);
	@(negedge clk) D_En = 1'b1; T_Sel = 1'b1; FS = 5'h01; Y_Sel = 3'b010;
	for (i=0; i<16; i=i+1) begin
		// Store memory
		DT = memory[D_Addr];
		@(negedge clk)	D_Addr = D_Addr + 5'h1;
	end
	D_En = 1'b0; // Deassert write enable at end
	end
endtask

task do_Ops; begin
	$display("\nPERFORMING MICRO-OPERATIONS\n");
	
	// Logical OR ($r1 <= $r3 | $r4)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00001_00011_00100;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_01001_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	// Subtraction (Signed) ($r2 <= $r1 - $r14)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00010_00001_01110;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00100_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	// Logical Shift Right ($r3 shr $r4)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00011_00000_00100;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_01100_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	// Logical Shift Left ($r4 shl $r5)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00100_00000_00101;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_01110_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	// Division ( {$r6,$r5} <= $r15/$r14 ) $r6 <- HI, $r5 <- LO
	// Takes three operations
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b0_00000_01111_01110;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_11111_1_000;
    // Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00110_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_100;
    // Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00101_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_011;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	// Multiplication using DT ( {$r8,$r7} <= $r11*0xFFFF_FFFB ) $r8 <- HI, $r7 <- LO
	// Takes three operations
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b0_00000_01011_00111;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b1_11110_1_000;
    // Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01000_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_100;
    // Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_00111_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_011;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
    // Register Init using DY ($r12 <= 0xABCD_EF01)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01100_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_001;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
    // 1's Complement ($r11 <= $r0 nor $r11)
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01011_00000_01011;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_01011_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
    // 2's Complement ($r10 <= $r0 - $r10) Signed subtraction
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01010_00000_01010;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00101_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
	
    // Addition Signed ($r9 <= $r10 - $r11) 
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01001_01010_01011;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00011_0_010;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
    // Pass using PC_in ($r13 <= 0x1001_00C0) 
	@(negedge clk)
	{ D_En , D_Addr, S_Addr , T_Addr } = 16'b1_01101_00000_00000;
	{ T_Sel, FS    , HILO_ld, Y_Sel  } = 10'b0_00000_0_000;
	// Integer Datapath Constants
	DT    = 32'hFFFF_FFFB;
	DY    = 32'hABCD_EF01;
	PC_in = 32'h1001_00C0;
    
	end
endtask
      
endmodule

