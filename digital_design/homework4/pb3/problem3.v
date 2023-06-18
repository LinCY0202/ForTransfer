module D_F_F(output_Q,input_D,clock,reset);
    input input_D,clock,reset;
    output reg output_Q;
    always@(posedge clock,negedge reset)
        if(reset==0) output_Q<=0;
        else 
            output_Q<=input_D;
endmodule

module pb3(data,clock,reset);
    input clock,reset;
    output [2:0]data;

    wire d2,d1,d0;

    assign d2=data[2]^data[1];
    assign d1=(data[0]|((~data[2])&data[1]));
    assign d0=(~data[2])&(~data[1])&(~data[0]);

    D_F_F D0(data[0],d0,clock,reset);
    D_F_F D1(data[1],d1,clock,reset);
    D_F_F D2(data[2],d2,clock,reset);

endmodule