module tb_counter;
wire [2:0] t_A, t_state_A;
reg t_clock, t_reset;

counter M1(t_clock, t_reset, t_A);
counter_state M2(t_clock, t_reset, t_state_A);

initial #200 $finish;
always #5 t_clock = ~t_clock;
initial begin
t_reset = 0;
t_clock = 0;
#10 t_reset = 1;
end
endmodule
