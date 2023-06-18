module D_flip_flop(Q,D,clk,rst);
    output reg Q;
    input clk,rst,D;
    always@(posedge clk,negedge rst)
        if(rst==0) Q<=1'b0;
        else Q<=D;
endmodule

module problem3(
    output  A,B,C,
    input clk,rst
);
    wire DA,DB,DC;
    assign DA=A^B,
        DB=C|(A&(~B)),
        DC=(~A)&(~B)&(~C);
    D_flip_flop D0(A,DA,clk,rst);
    D_flip_flop D1(B,DB,clk,rst);
    D_flip_flop D2(C,DC,clk,rst);
endmodule