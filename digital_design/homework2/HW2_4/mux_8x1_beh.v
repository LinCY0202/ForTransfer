module mux_8x1_beh(F,A,B,C,D);
    input A,B,C,D;
    output F;
    wire tame;
    wire [7:0]F_wire;

    assign F_wire[0]=!D;
    assign F_wire[1]=!D;
    assign F_wire[2]=D;
    assign F_wire[3]=0;
    assign F_wire[4]=!D;
    assign F_wire[5]=!D;
    assign F_wire[6]=0;
    assign F_wire[7]=!D;

    assign tame=A*4+B*2+C*1;
    assign F=F_wire[tame];

endmodule

