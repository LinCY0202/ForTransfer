module testcounter;
reg Count;
reg Reset;
wire A0,A1,A2,A3;
//Instantiate ripple counter
Ripple_Counter_4bit M0 (A3, A2, A1, A0, Count, Reset);
always
#5 Count = ~Count;
initial
begin
Count = 1'b0;
Reset = 1'b1;
#4 Reset = 1'b0;
end
initial
#200 $finish;
 
endmodule
