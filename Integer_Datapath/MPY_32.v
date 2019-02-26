`timescale 1ns / 1ps
/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  MPY_32.v
 * Project:    Lab_Assignment_3
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose:    Handles additional alu logic to multiply to inputs
 *         
 * Notes:
 *
 ****************************************************************************/
 module MPY_32(S, T, Y_hi, Y_lo, C, V, N, Z);
    input      [31:0] S, T;
    output reg [31:0] Y_hi, Y_lo;
    output reg        C, V, N, Z;
    
    integer int_s, int_t;
    
    // Produce a 64 bit product as output whenever inputs change
    always @ (*) begin
        // Convert to integers
        int_s = S;
        int_t = T;
        {Y_hi,Y_lo} = int_s * int_t;
        
        // Flags
        C = 1'bx;
        V = 1'bx;
        N = Y_hi[31];
        Z = ({Y_hi,Y_lo} == 64'h0)? 1'b1 : 1'b0;        
    end
    
endmodule
