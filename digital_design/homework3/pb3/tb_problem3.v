module tb_problem3;

	wire y_out;
	reg  x_in, clock, reset;

	problem3 m0 (y_out, x_in, clock, reset);

	initial #100 $finish;
	initial begin clock=1; forever #5 clock=~clock; end
	
	initial fork
		       reset = 0;
		#1     reset = 1;
		#0     x_in = 0;
		#10    x_in = 1;
		#20    x_in = 0;
		#30    x_in = 1;
		#40    x_in = 0;
		#50    x_in = 0;
		#60    x_in = 1;
		#70    x_in = 0;
		#80    x_in = 1;
		#90    x_in = 1;
		#100   x_in = 1;
	join
	
endmodule
