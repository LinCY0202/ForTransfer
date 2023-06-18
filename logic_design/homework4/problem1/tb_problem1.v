module tb_problem1;
    wire [3:0]RA;
    reg clk,clear,SI,shift_control;
    problem1 uut(.RA(RA),.clk(clk),.clear(clear),.SI(SI),.shift_control(shift_control));
    initial #100 $finish;
    always #5 clk=~clk;
    initial 
        begin
            #0  clear=0;
                clk=0;
                shift_control=0;
            #5  clear=1;
                shift_control=1;
                SI=1;
            #10 SI=0;
            #10 SI=1;
            #10 SI=0;
            #10 SI=1;
            #10 SI=0;
            #10 SI=1;
        end
endmodule