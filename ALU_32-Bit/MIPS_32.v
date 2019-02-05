`timescale 1ns / 1ps

module MIPS_32(S,T,FS,Y_hi,Y_lo,C,V,N,Z);
    input      [31:0] S, T;
    input      [ 4:0] FS;
    output reg [31:0] Y_hi, Y_lo;
    output reg        C, V, N, Z;

    integer int_s, int_t, int_yl;
    
    always @ (*) begin
        int_s = S;
        int_t = T;
        Y_hi = 32'h0;
        
        case (FS)
            // Arithmetic
            5'h00  : {C,Y_lo} = {1'bx, S}; // PASS_S
            5'h01  : {C,Y_lo} = {1'bx, int_t}; // PASS_T
            5'h02  : {C,Y_lo} = int_s + int_t; // ADD
            5'h03  : {C,Y_lo} = S + T; // ADDU
            5'h04  : {C,Y_lo} = int_s - int_t; // SUB
            5'h05  : {C,Y_lo} = S - T; // SUBU
            5'h06  : {C,Y_lo} = (int_s < int_t) ? {1'b0, 1}: 0; // SLT
            5'h07  : {C,Y_lo} = (S < T) ? {1'b0, 1}: 0; // SLTU
            // Logic
            5'h08  : {C,Y_lo} = {1'bx, S & T}; // AND
            5'h09  : {C,Y_lo} = {1'bx, S | T}; // OR
            5'h0A  : {C,Y_lo} = {1'bx, S ^ T}; // XOR
            5'h0B  : {C,Y_lo} = {1'bx, ~(S | T)}; // NOR
            5'h0C  : {C,Y_lo} = T >> 1; // SRL
            5'h0D  : {C,Y_lo} = int_t >> 1; // SRA //FIXME: int_t >>>1
            5'h0E  : {C,Y_lo} = T << 1; // SLL
            5'h16  : {C,Y_lo} = {1'bx, S & {16'h0, T[15:0]}}; // ANDI
            5'h17  : {C,Y_lo} = {1'bx, S | {16'h0, T[15:0]}}; // ORI
            5'h18  : {C,Y_lo} = {1'bx, {T[15:0],16'h0}}; // LUI
            5'h19  : {C,Y_lo} = {1'bx, S ^ {16'h0, T[15:0]}}; // XORI
            
            // Other
            5'h0F  : {C,Y_lo} = S + 1; // INC
            5'h10  : {C,Y_lo} = S + 4; // INC4
            5'h11  : {C,Y_lo} = S - 1; // DEC
            5'h12  : {C,Y_lo} = S - 4; // DEC4
            5'h13  : {C,Y_lo} = {1'b0, 32'h0}; // ZEROS
            5'h14  : {C,Y_lo} = {1'b0, 32'h1}; // ONES
            5'h15  : {C,Y_lo} = {1'b0, 32'h3FC}; // SP_INIT
            
            default: {C,Y_lo} = {1'bx, S}; // DEFAULT to PASS_S
        endcase
        
        
        // Flags
        
        int_yl = Y_lo;
		if (((int_yl < 0 && int_s > 0 && int_t > 0)
		    || (int_yl > 0 && int_s < 0 && int_t < 0))
			 && (FS == 5'h02))
		   V = 1'b1;
		else if ((((int_yl < 0 && int_s > 0 && int_t < 0)
		    || (int_yl > 0 && int_s < 0 && int_t > 0))
			 && (FS == 5'h04)))
		   V = 1'b1;
		else if (C == 1'b1 && FS != 5'h02 && FS != 5'h04)
		   V = 1'b1;
		else
		   V = 1'b0;
        
        
        N = Y_lo[31];
        Z = (Y_lo == 32'h0) ? 1'b1: 1'b0;
    end
    

endmodule
