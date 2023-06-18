module tb_pb3();
    reg clock,reset;
    wire [2:0]data;
    pb3 uut(data,clock,reset);
    initial #150 $finish;
    initial begin #0 clock=0;forever #5 clock=~clock;end

    initial 
        begin
            reset=0;
            
        #1  reset=1;
        end
endmodule