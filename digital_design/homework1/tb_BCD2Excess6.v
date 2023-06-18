module tb_BCD2Excess6;

	// Inputs
	reg [3:0] I;
	// Outputs
	wire [3:0] O;
	
	// Instantiate the Unit Under Test (UUT)
	BCD2Excess6 uut (
		.A(I[3]), 
		.B(I[2]), 
		.C(I[1]), 
		.D(I[0]), 
		.W(O[3]),
		.X(O[2]),
		.Y(O[1]),
		.Z(O[0])
	);

	initial 
		begin
		// Add stimulus here
		#10 I = 4'h2;
        #10 I = 4'h8;
        #10 I = 4'h9;
        #10 I = 4'hf;
        #10 I = 4'h1;
	    end
	initial #60 $finish;
endmodule
