`timescale 1ns / 1ps
module ALU_32 (S, T, FS, Y_hi, Y_lo, C, V, N, Z);
    input [31:0] S, T;
    input [4:0] FS;
    output reg C, V, N, Z;
    output reg [31:0] Y_hi, Y_lo;

    
	wire [31:0] a_hi, a_lo, c_hi, c_lo, e_hi, e_lo, b_lo;
    wire  [3:0]	a, s;
	wire  [1:0] b, c;

    //MIPS_32 mips (S,T,FS,Y_hi,Y_lo,N,Z,V,C);
    MIPS_32 mips   (S,T,FS,a_hi,a_lo,a[3],a[2],a[1],a[0]);
    
    //MPY_32 multiply(a, b, prod, N, Z);
    MPY_32 multiply (S, T, {c_hi,c_lo}, b[1], b[0]);
    
    //DIV_32 divide(a, b, quot, rem, N, Z);
    DIV_32 divide (S, T, e_lo, e_hi, c[1], c[0]);
    
    
    
    always @ (*) begin
        case(FS)
            // Arithmetic
            5'h00  : {{C,V,N,Z},Y_hi,Y_lo} = {{2'hx,a[1:0]},a_hi,a_lo};      // pass S
            
            
            5'h1E  : {{C,V,N,Z},Y_hi,Y_lo} = {{2'hx,b[1:0]},c_hi,c_lo};      // MUL

            // Logical
            // Other
            // Default
        endcase
    end

endmodule
