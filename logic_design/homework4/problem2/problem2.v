module JK_flip_flop(Q,J,K,clk,clear);
    output reg Q;
    input J,K,clk,clear;
    always@(negedge clk,posedge clear)
        if(clear==0) Q<=1'b0;
        else    
            case({J,K})
                2'b00:Q<=Q;
                2'b01:Q<=1'b0;
                2'b10:Q<=1'b1;
                2'b11:Q<=(~Q);
            endcase
endmodule

module problem2(Q8,Q4,Q2,Q1,count,clear);
    output Q8,Q4,Q2,Q1;
    input count,clear;
    wire Q8_not,j_Q8;
    assign 
        Q8_not=~Q8,
        j_Q8=Q4&Q2;
    JK_flip_flop J0(Q1,1,1,count,clear);
    JK_flip_flop J1(Q2,Q8_not,1,Q1,clear);
    JK_flip_flop J2(Q4,1,1,Q2,clear);
    JK_flip_flop J3(Q8,j_Q8,1,Q1,clear);
endmodule 