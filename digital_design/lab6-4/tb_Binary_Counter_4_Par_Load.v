module tb_Binary_Counter_4_Par_Load;
	reg [3:0]	Data_in;
	reg 		Count, Load, CLK, Clear_b;
	wire [3:0] 	A_count;
	wire		C_out;
	
	Binary_Counter_4_Par_Load M1(
		.A_count(A_count),
		.C_out(C_out),
		.Data_in(Data_in),
		.Count(Count),
		.Load(Load),
		.CLK(CLK),
		.Clear_b(Clear_b)
	);
	
	initial #200 $finish;
	initial begin CLK = 0; forever #5 CLK = ~CLK; end
	initial fork
    #3 Clear_b = 1;
    #4 Clear_b = 0;
    #9 Clear_b = 1;

    #10 Data_in = 4'hA;
    #10 Load = 1'b1;

    #20 Load = 1'b0;
    #30 Count = 1'b1;

    #100 Clear_b = 1'b0;
    #110 Clear_b = 1'b1;

  join
endmodule
