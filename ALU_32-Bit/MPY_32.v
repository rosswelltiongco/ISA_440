`timescale 1ns / 1ps
module MPY_32(a, b, prod, N, Z);
    input [31:0] a, b;
    output reg N,Z;
    output reg [63:0] prod;
    
    integer int_a, int_b;
    
    always @ (*) begin
        int_a = a;
        int_b = b;
        prod = int_a * int_b;
    end

endmodule
