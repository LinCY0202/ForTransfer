module tb_problem6;
  wire y_out;
  reg x_in, clock, reset;
  problem6 uut(.y_out(y_out),.x_in(x_in),.clock(clock),.reset(reset));
  initial #90 $finish;
  always #5 clock=~clock;
  initial
	begin
		#0 clock=0;
		   reset=0;
		#10 reset=1;
			x_in=1;
		#10 x_in=1;	
		#10 x_in=0;	
		#10 x_in=0;	
		#10 x_in=1;	
		#10 x_in=1;	
		#10 x_in=0;	
		#10 x_in=1;
	end
endmodule
