module D_F_F(output_Q,input_D,clock,reset);
    input input_D,clock,reset;
    output reg output_Q;
    always@(posedge clock,negedge reset)
        if(reset==0) output_Q<=0;
        else    
            output_Q<=input_D;



endmodule

module Johnson(a,b,c,e,clock,reset);    
    input clock,reset;
    output a,b,c,e;

    D_F_F D_a(a,~e,clock,reset);
    D_F_F D_b(b,a,clock,reset);
    D_F_F D_c(c,b,clock,reset);
    D_F_F D_e(e,c,clock,reset);
endmodule