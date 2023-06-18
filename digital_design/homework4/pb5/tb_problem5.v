module tb_Johnson();
    wire a,b,c,e;
    reg clock,reset;

    Johnson uut (a,b,c,e,clock,reset);
    initial #150 $finish;
    initial begin #0 clock=0;forever #5 clock=~clock;end

    initial begin
	      reset = 0;
	   #1 reset = 1;
	end


endmodule