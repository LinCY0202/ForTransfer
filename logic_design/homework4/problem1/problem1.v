module JK_flip_flop(Q,J,K,clk,clear);
    output reg Q;
    input J,K,clk,clear;
    always@(posedge clk,negedge clear)
        if(clear==0) Q<=1'b0;
        else    
            case({J,K})
                2'b00:Q<=Q;
                2'b01:Q<=1'b0;
                2'b10:Q<=1'b1;
                2'b11:Q<=(~Q);
            endcase
endmodule

module problem1(
    output reg [3:0]RA,
    input clk,clear,SI,shift_control
);
    wire c,x,y,j,k,clk_jk,S;
    reg [3:0]RB;
    assign
        x=RA[0],
        y=RB[0], 
        j=x&y,
        k=~(x|y),
        clk_jk=clk&shift_control,
        S=x^y^c;
    always@(posedge clk,negedge clear)
        if(clear==0) RA<=4'b0000;
        else if(shift_control) RA<={S,RA[3:1]};
    always@(posedge clk,negedge clear)
        if(clear==0) RB<=4'b0000;
        else if(shift_control) RB<={SI,RB[3:1]};
    JK_flip_flop J0(c,j,k,clk_jk,clear);
endmodule