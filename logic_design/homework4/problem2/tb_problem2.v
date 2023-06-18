module tb_problem2;
    wire Q8,Q4,Q2,Q1;
    reg count,clear;
    problem2 uut(.Q8(Q8),.Q4(Q4),.Q2(Q2),.Q1(Q1),.count(count),.clear(clear));
    initial #100 $finish;
    always #5 count=~count;
    initial
        begin
            #0  clear=0;
                count=0;
            #5  clear=1;
        end
endmodule