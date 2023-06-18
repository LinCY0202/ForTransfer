module tb_Mul_4x3;
	reg [2:0] A;
	reg [3:0] B;
	wire [5:0] C;
	
	Mu1_4x3 uut (A,B,C);
	initial 
		begin
			A=0; B=0;
			#20 A=3'b100;
				B=4'b0110;
			#20 A=3'b001;
				B=4'b1010;
			#20 A=3'b010;
				B=4'b1111;
		end
		initial #70 $finish;
endmodule
