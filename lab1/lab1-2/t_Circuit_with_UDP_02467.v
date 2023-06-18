// Testbench for Simple_Circuit_prop_delay
module t_Circuit_with_UDP_02467;
  wire	t_E, t_F;
  reg	t_A, t_B, t_C, t_D;

  Circuit_with_UDP_02467 M1 (t_E, t_F, t_A, t_B, t_C, t_D);  // Instance name required
	  
  initial
    begin
      t_A = 1'b0; t_B = 1'b0; t_C = 1'b0; t_D = 1'b0;
      #50 t_A = 1'b0; t_B = 1'b0; t_C = 1'b1; t_D = 1'b0;
	  #50 t_A = 1'b1; t_B = 1'b1; t_C = 1'b0; t_D = 1'b1;
   end
  initial #200 $finish;
endmodule
