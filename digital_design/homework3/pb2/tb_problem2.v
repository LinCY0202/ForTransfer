module tb_problem2();

	wire y_out;
	reg x_in,clock,reset;
	
	problem2 M0 (y_out,x_in,clock,reset);
	
	initial #120 $finish;
	initial begin clock=0;forever #5 clock=~clock;end

	initial fork
		reset=0;
		
		#1 reset=1;
		
		#0  x_in=0;
		#10 x_in=1;
		#20 x_in=1;
		#30 x_in=0;
		#40 x_in=0;
		#50 x_in=1;
		#60 x_in=1;
		#70 x_in=1;
		#80 x_in=0;
		#90 x_in=1;
	    #100 reset=0;
	join

endmodule