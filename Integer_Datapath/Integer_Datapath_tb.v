`timescale 1ns / 1ps


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
	reg C;
	reg V;
	reg N;
	reg Z;
	reg [31:0] DY;
	reg [31:0] PC_in;
	reg [2:0] Y_Sel;

	// Outputs
	wire [31:0] ALU_OUT;
	wire [31:0] D_OUT;
    
    integer i;
    reg [31:0] memory [31:0];
    
    always #5 clk = ~clk;

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

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		S_Addr = 0;
		FS = 0;
		HILO_ld = 0;
		D_En = 0;
		D_Addr = 0;
		T_Addr = 0;
		DT = 0;
		T_Sel = 0;
		C = 0;
		V = 0;
		N = 0;
		Z = 0;
		DY = 0;
		PC_in = 0;
		Y_Sel = 0;

		// Wait 100 ns for global reset to finish
		#50; reset = 0;
        
		// Add stimulus here
        $timeformat(-9, 1, " ps", 9);
        $readmemh("IntReg_Lab3.dat", memory);
        
        
        reg_Write();
        reg_Dump();

	end


task reg_Dump; begin
    $display(" ");
    $display("Displaying values within the register");
    $display(" ");
    @(negedge clk) begin 
        FS = 5'h00;
        T_Sel = 1'b0;
        D_En = 1'b0;
        T_Addr = 5'h0; //FIXME:was 10
        S_Addr = 5'h0;
        Y_Sel = 3'b010;
        //Cycle through S and T starting at 0 and 16 respectively
        for (i=0; i<16; i=i+1) begin
            @(negedge clk)
                $display("t = %t || S at Address %h = %h || T at Address %h = %h", 
                            $time, S_Addr, ALU_OUT , T_Addr, D_OUT);
            S_Addr = i + 5'h01;
            T_Addr = i + 5'h11;
        end
    end
    $display(" ");
    end
endtask


task reg_Write; begin
	@(negedge clk) D_En = 1'b1; T_Sel = 1'b1; FS = 5'h01; Y_Sel = 3'h2;
	for (i=0; i<16; i=i+1) begin
		DT = memory[D_Addr];
			//Store corresponding data at the correct address
		@(negedge clk)	//Gives module time for register to write
			D_Addr = D_Addr + 5'h1;
	end
	D_En = 1'b0;
		//Disable data write
	end
	endtask
      
endmodule

