module D_flip_flop(Q,D,clk,rst);
    output reg Q;
    input clk,rst,D;
    always@(posedge clk,negedge rst)
        if(rst==0) Q<=1'b0;
        else Q<=D;
endmodule

module problem5(
    output A,B,C,E,
    input clk,rst
);
    wire E_not;
    assign E_not=~E;
    D_flip_flop D0(A,E_not,clk,rst);
    D_flip_flop D1(B,A,clk,rst);
    D_flip_flop D2(C,B,clk,rst);
    D_flip_flop D3(E,C,clk,rst);
endmodule