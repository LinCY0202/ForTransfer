module top(
    input clock,
    input reset,
    output [2:0] A,
    output [7:0] seg,
    output [3:0] an
    );
    wire clk_1Hz;
    wire [2:0] sSeg_in;
    wire rst;
	
    assign rst = ~reset;
    
    counter M1(clk_1Hz, rst, A);
    //counter_state M2(clk_1Hz, rst, A);
    Freq_gen M3(clock, rst, clk_1Hz);
    sSeg M4(sSeg_in, seg, an);
    assign sSeg_in = A;    
endmodule
