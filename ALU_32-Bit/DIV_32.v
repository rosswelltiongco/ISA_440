`timescale 1ns / 1ps
/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  DIV_32.v
 * Project:    Lab_Assignment_1
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose:    Handles the division logic and returns a quotient and
               remainder based on two inputs
 *         
 * Notes:
 *
 ****************************************************************************/
 module DIV_32(S, T, Y_hi, Y_lo, C, V, N, Z);
    input [31:0] S, T;
    output reg [31:0] Y_hi, Y_lo;
    output reg C, V, N, Z;
    
    integer int_s, int_t;
    
    // Produce a 32 bit quotient and remainder as output whenever inputs change
    always @ (*) begin
        // Convert to integers
        int_s = S;
        int_t = T;
        Y_lo = int_s / int_t; // Quotient
        Y_hi = int_s % int_t; // Remainder
        
        // Flags
        C = 1'bx;
        V = 1'bx;
        N = Y_lo[31];
        Z = (Y_lo == 32'h0)? 1'b1 : 1'b0;
    end

    
    
endmodule
