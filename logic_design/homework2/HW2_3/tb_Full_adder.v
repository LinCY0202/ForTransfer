module tb_Full_adder;
	reg x,y,z;
	wire S,C;
	
	Full_adder uut(x,y,z,S,C);
	
	initial 
		begin
			#10 x=1'b0;
				y=1'b0;
				z=1'b0;
			#10 x=1'b1;
				y=1'b0;
				z=1'b1;
			#10 x=1'b1;
				y=1'b1;
				z=1'b1;
		end
		initial #40 $finish;
endmodule
