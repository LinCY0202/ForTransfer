module BCD2Excess6(W,X,Y,Z,A,B,C,D);
  output W,X,Y,Z;
  input	A,B,C,D;

  assign Z=D,
  Y=!C,
  X=((!B)&&(!C))||(B&&C),
  W=A || B || C;
endmodule