module tb_shift_register();
    wire  so;
    reg si;
    reg clock,reset;
    shift_register uut (si,clock,so,reset);

    initial #150 $finish;
    initial begin clock=0;forever #5 clock=~clock;end
    initial
        fork
            reset=0;
            #5 reset=1;
            #0 si=1;
            #30 si=0;
            #60 si=1;
            #100 si=0;


        join

endmodule