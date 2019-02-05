`timescale 1ns / 1ps

module DIV_32(a, b, quot, rem, N, Z);
    input [31:0] a, b;
    output reg N,Z;
    output reg [31:0] quot, rem;
    
    integer int_a, int_b;
    
    always @ (*) begin
        int_a = a;
        int_b = b;
        quot = int_a / int_b;
        rem  = int_a % int_b; //div hi is remainder
    end
    

endmodule
