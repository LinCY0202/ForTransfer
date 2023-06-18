module pb1(shift_cont,clock,s_input,reset,s_A,s_input_A);
    input shift_cont,clock,s_input,reset,s_A,s_input_A;
    wire x,y;
    four_reg_shift A(shift_cont,clock,s_input,reset,x);
    four_reg_shift B(shift_cont,clock,si_A,reset,y);
    wire J,K,JK_clock,ci,si_A;
    assign J=x&y;
    assign K=(~x|y);
    assign JK_clock=shift_cont&clock;
    assign S=x^y^ci;
    assign si_A=(s_A)? S:s_input_A;
    JK_F_F uut(ci,J,K,JK_clock,clock);
endmodule

module JK_F_F (Q,J,K,clock,reset);
    output Q;
    input J,K,clock,reset;
    wire jk;
    assign jk=(J&~Q)|(~K&Q);
    D_F_F uut(Q,JK,clock,reset);
endmodule

module D_F_F (Q,D,clock,reset);
    output reg Q;
    input D,clock,reset;

    always@(posedge clock,negedge reset)
        if(reset==0) Q<=0;
        else    
            Q<=D;
endmodule

module four_reg_shift (shift_cont,clock,si,reset,output_s0);
    input shift_cont,clock,si,reset;
    output reg output_s0;

    reg [3:0]data;
    always @(posedge clock,negedge reset) 
    begin
        if(reset==0)
            begin
                output_s0=0;
                data=4'b0000;
            end
        else
            if(shift_cont)
                begin
                    output_s0=data[0];
                    data={si,data[3:1]};
                end
    end
endmodule