module pb2(q1,q2,q4,q8,count,reset);
    input count,reset;
    output q1,q2,q4,q8;

    JK_F_F Q1(q1,1,1,count,reset);
    JK_F_F Q2(q2,!q8,1,!q1,reset);
    JK_F_F Q4(q4,1,1,!q2,reset);
    JK_F_F Q8(q8,q2&q4,1,!q1,reset);
endmodule

module JK_F_F (Q,J,K,clock,reset);
    input J,K,clock,reset;
    output reg Q;

    always @(posedge clock,negedge reset) begin
        if(reset==0) Q<=0;
        else
            case({J,K})
                2'b00:Q<=Q;
                2'b01:Q<=0;
                2'b10:Q<=1;
                2'b11:Q<=~Q;
            endcase
    end
endmodule