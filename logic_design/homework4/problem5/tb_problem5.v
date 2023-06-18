module tb_problem5;
    wire A,B,C,E;
    reg clk,rst;
    problem5 uut(.A(A),.B(B),.C(C),.E(E),.clk(clk),.rst(rst));
    initial #100 $finish;
    always #5 clk=~clk;
    initial 
        begin
            #0  rst=0;
                clk=1;
            #5  rst=1; 
        end
endmodule