module shift_register(si,clock,so,reset);
    output reg so;
    input si;
    input clock,reset;
    reg [3:0]d;
    always@(posedge clock,negedge reset)
    if(reset==0) d<=4'b0000;
    else
        begin
            so<=d[0];
            d<={si,d[3:1]};
        end

endmodule