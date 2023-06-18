module tb_Decoder_3x8;
	reg x,y,z;
	wire [7:0]D;
	
	Decoder_3x8 uut(x,y,z,D);
	initial
		begin
			#10 x=1'b1;
				y=1'b0;
				z=1'b1;
			#10 x=1'b1;
				y=1'b1;
				z=1'b1;
			#10 x=1'b1;
				y=1'b1;
				z=1'b0;
		end
		initial #40 $finish;
endmodule
	
