module Freq_gen(
    input clock,
    input reset,
    output clk_1Hz
    );
    reg [26:0] counter = 27'd0;
    reg mhz = 1'b0;
    always@(posedge clock, negedge reset)
    if(reset == 0)
        begin
            mhz <= 1'b0;
            counter <= 27'd0;
        end
    else
        begin
            counter <= counter + 1'b1;
            if(counter >= 27'd99999999)
	           counter <= 27'd0;
            else if(counter >= 27'd50000000)
                mhz <= 1'b1;
            else
                mhz <= 1'b0;
        end 
    assign clk_1Hz =  mhz;
endmodule
