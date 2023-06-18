module tb_problem6();

	wire y_out;
	reg x_in,clock,reset;
	
	problem6 M0 (y_out,x_in,clock,reset);
	
	initial #70 $finish;
	initial begin clock=0;forever #5 clock=~clock;end

	initial fork
		reset=0;
		
		#1 reset=1;
		
		#0  x_in=0;
		#10 x_in=1;
		#20 x_in=0;
		#30 x_in=1;
		#40 x_in=0;
		#50 x_in=1;
	    #60 reset=0;
	join

endmodule