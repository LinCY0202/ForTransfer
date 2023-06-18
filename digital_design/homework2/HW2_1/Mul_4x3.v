module ripple_carry_4_bit_adder ( S, C4, A, B, C0);
  output [3: 0] 	S;
  output	C4;
  input [3: 0]	A, B;
  input		C0;
  wire 		C1, C2, C3;	// Intermediate carries
// Instantiate chain of full adders
  full_adder	
	FA0 (       S[0],     C1,         A[0],        B[0],      C0),
	FA1 (       S[1],     C2,         A[1],        B[1],      C1),
	FA2 (       S[2],     C3,         A[2],        B[2],      C2), 
	FA3 (       S[3],     C4,         A[3],        B[3],      C3);
endmodule

module half_adder (S, C, x, y);
  output 	S, C;
  input	x, y;

  xor (S, x, y);
  and (C, x, y);
endmodule

module full_adder (S, C, x, y, z);
  output 	S, C;
  input	x, y, z;
  wire	S1, C1, C2;

// Instantiate half adders
  half_adder HA1 (S1, C1, x, y);
  half_adder HA2 (S, C2, S1, z);
  or G1 (C, C2, C1);
endmodule

module Mul_4x3 (C,A,B);
    input  [2:0]A;
    input  [3:0]B;
    output [6:0]C;

    wire [3:0]X1;
    wire [3:0]X2;
    wire [3:0]X3;
    wire [3:0]sum;


    assign X1[0]=A[0]&B[1];
    assign X1[1]=A[0]&B[2];
    assign X1[2]=A[0]&B[3];
    assign X1[3]=0;

    assign X2[0]=A[1]&B[0];
    assign X2[1]=A[1]&B[1];
    assign X2[2]=A[1]&B[2];
    assign X2[3]=A[1]&B[3];
    
    assign X3[0]=A[2]&B[0];
    assign X3[1]=A[2]&B[1];
    assign X3[2]=A[2]&B[2];
    assign X3[3]=A[2]&B[3];


    assign C[0]=A[0]&B[0];
    

    ripple_carry_4_bit_adder uut1(
        .S({sum[2],sum[1],sum[0],C[1]}),
        .C4(sum[3]),
        .A(X1),
        .B(X2),
        .C0(1'b0)
    );

    ripple_carry_4_bit_adder uut2(
        .S({C[5],C[4],C[3],C[2]}),
        .C4(C[6]),
        .A({sum[3],sum[2],sum[1],sum[0]}),
        .B(X3),
        .C0(1'b0)
    );


endmodule