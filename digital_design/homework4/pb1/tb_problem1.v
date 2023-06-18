module tb_pb1();
    reg shift_cont,clock,s_input,reset,s_A,s_input_A;
    pb1 uut (shift_cont,clock,s_input,reset,s_A,s_input_A);
    initial #150 $finish;
    initial begin
        #0 clock=0;
        forever 
            #5 clock=~clock;
    end
    initial fork
        reset=0;
        #1 reset=1;
        #5 begin
            shift_cont=1;s_A=0;s_input_A=1;s_input=1;
        end
        #15 begin
            s_input_A=0;s_input=1;
        end
        #25 begin
            s_input_A=1;s_input=0;
        end
        #35 begin
            s_input_A=0;s_input=0;
        end
        #45 begin
            shift_cont=0;s_A=1;
        end
        #65 shift_cont=1;
        #105 shift_cont=0;

    join
endmodule