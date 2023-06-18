module tb_problem4;
    wire SO;
    reg SI,clk;
    problem4 uut(.SO(SO),.SI(SI),.clk(clk));
    initial #100 $finish;
    always #5 clk=~clk;
    initial 
        begin
           #0 clk=0;
           #5 SI=1'b1;
           #50 SI=1'b0; 
        end
endmodule