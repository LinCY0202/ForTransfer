module tb_mux_8x1_beh;
	reg A, B, C, D;
	wire F;
	mux_4x1_beh uut(F,A, B, C, D);
	initial begin
		#20 A = 1'b0;
			B = 1'b0;
			C = 1'b0;
			D = 1'b0;

		#20 A = 1'b0;
			B = 1'b1;
			C = 1'b0;
			D = 1'b0;
			
		#20 A = 1'b0;
			B = 1'b1;
			C = 1'b1;
			D = 1'b0;

		#20 A = 1'b1;
			B = 1'b1;
			C = 1'b1;
			D = 1'b1;
	end 
	initial #100 $finish;
endmodule
