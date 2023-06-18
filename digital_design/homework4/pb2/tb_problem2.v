module tb_pb2();
    reg count,reset;
    wire q1,q2,q4,q8;

    pb2 uut(q1,q2,q4,q8,count,reset);
    initial #150 $finish;
    initial begin #0 count=0;forever #5 count=~count;end
    initial begin
        reset=0;
        #1 reset=1;
    end
endmodule