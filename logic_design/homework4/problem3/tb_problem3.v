module tb_problem3;
    wire A,B,C;
    reg clk,rst;
    problem3 uut(.A(A),.B(B),.C(C),.clk(clk),.rst(rst));
    initial #100 $finish;
    always #5 clk=~clk;
    initial 
        begin
            #0 rst=0;
                clk=0;
            #10 rst=1;
        end
endmodule