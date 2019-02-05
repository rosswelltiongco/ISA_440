`timescale 1ns / 1ps
module MPY_32(S, T, Y_hi, Y_lo, C, V, N, Z);
    input [31:0] S, T;
    output reg [31:0] Y_hi, Y_lo;
    output reg C, V, N, Z;
    
    integer int_s, int_t;
    
    always @ (*) begin
        int_s = S;
        int_t = T;
        {Y_hi,Y_lo} = int_s * int_t;
        
        // Flags
        C = 1'bx;
        V = 1'bx;
        N = Y_hi[63];
        Z = ({Y_hi,Y_lo} == 64'h0)? 1'b1 : 1'b0;        
    end
    
    
    
    
endmodule
