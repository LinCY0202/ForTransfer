module mux_8x1_beh(
  output reg F,
  input A, B, C, D
);

  always @ ({A, B, C, D})
    case ({A, B, C, D})
       4'b0000:	F = (!D);
       4'b0001:	F = (!D);
       4'b0010:	F = (!D);
       4'b0011:	F = (!D);
	   4'b0100:	F = D;
	   4'b0101:	F = D;
	   4'b0110:	F = 0;
	   4'b0111:	F = 0;
	   4'b1000:	F = (!D);
	   4'b1001:	F = (!D);
	   4'b1010:	F = (!D);		
	   4'b1011:	F = (!D);
	   4'b1100:	F = 0;
	   4'b1101:	F = 0;
	   4'b1110:	F = (!D); 
	   4'b1111:	F = (!D);
    endcase
  endmodule
