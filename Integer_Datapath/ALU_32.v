`timescale 1ns / 1ps
/****************************** C E C S  4 4 0 ******************************
 * 
 * File Name:  ALU_32.v
 * Project:    Lab_Assignment_3
 * Designer:   Rosswell Tiongco
 * Email:      rosswelltiongco@gmail.com
 * Rev. No.:   Version 1.0
 * Rev. Date:  Current Rev. Date 
 *
 * Purpose: A wrapper module that instantiates a MIPS, division, and
            multiplication submodules. Will give an output and flags
            based on inputs and an opcode
 *         
 * Notes:
 *
 ****************************************************************************/
module ALU_32 (S, T, FS, Y_hi, Y_lo, C, V, N, Z);
    input      [31:0] S, T;
    input      [ 4:0] FS;
    output reg        C, V, N, Z;
    output reg [31:0] Y_hi, Y_lo;    
    
    
    // Declaration of wires
    wire [31:0] mips_hi, mips_lo;
    wire [31:0] mpy_hi,  mpy_lo;
    wire [31:0] div_hi,  div_lo;
    wire        mips_C,mips_V,mips_N,mips_Z;
    wire        mpy_C,mpy_V,mpy_N,mpy_Z;
    wire        div_C,div_V,div_N,div_Z;
    
    
    // Instantiating submodules
    // MIPS_32   (S,T,FS,Y_hi,   Y_lo,   C,     V,   N,       Z);
    MIPS_32 mips (S,T,FS,mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z);
    
    // MPY_32    (S, T, Y_hi,   Y_lo,   C,     V,     N,     Z);
    MPY_32  mpy  (S, T, mpy_hi, mpy_lo, mpy_C, mpy_V, mpy_N, mpy_Z);
    
    // DIV_32    (S, T, Y_hi,   Y_lo,   C,     V,     N,     Z);
    DIV_32  div  (S, T, div_hi, div_lo, div_C, div_V, div_N, div_Z);
    
    
    // Wrapper modules selects outputs based on provided opcode
    always @ (*) begin
        casex(FS)
            // Arithmetic
            5'h00: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //pass S
            5'h01: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //pass T
            5'h02: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ADD
            5'h03: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ADDU
            5'h04: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SUB
            5'h05: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SUBU
            5'h06: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SLT
            5'h07: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SLTU
            5'h1E: {Y_hi,Y_lo,C,V,N,Z} = {mpy_hi,mpy_lo,mpy_C,mpy_V,mpy_N,mpy_Z};       //MUL
            5'h1F: {Y_hi,Y_lo,C,V,N,Z} = {div_hi,div_lo,div_C,div_V,div_N,div_Z};       //DIV
            
            // Logic
            5'h08: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //AND
            5'h09: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //OR
            5'h0A: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //XOR
            5'h0B: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //NOR
            5'h0C: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SRL
            5'h0D: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SRA
            5'h0E: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SLL
            5'h16: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ANDI
            5'h17: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ORI
            5'h18: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //LUI
            5'h19: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //XORI
            
            // Other
            5'h0F: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //INC
            5'h10: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //INC4
            5'h11: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //DEC
            5'h12: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //DEC4
            5'h13: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ZEROS
            5'h14: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //ONES
            5'h15: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z}; //SP_INIT
            
            default: {Y_hi,Y_lo,C,V,N,Z} = {mips_hi,mips_lo,mips_C,mips_V,mips_N,mips_Z};
        endcase
    end

endmodule
