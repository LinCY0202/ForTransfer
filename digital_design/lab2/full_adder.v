module half_adder (S, C, x, y);
  output 	S, C;
  input	x, y;

  xor (S, x, y);
  and (C, x, y);
endmodule

// Description of full adder
module full_adder (S, C, x, y, z);
  output 	S, C;
  input	x, y, z;
  wire	S1, C1, C2;

// Instantiate half adders
  half_adder HA1 (S1, C1, x, y);
  half_adder HA2 (S, C2, S1, z);
  or G1 (C, C2, C1);
endmodule
