module tb_Mul_4x3;

    reg [2:0]A;
    reg [3:0]B;
    wire [6:0]C;

    Mul_4x3 uut(C,A,B);

    initial 
        begin
                A=3'b000;B=4'b0000;
            #50 A=3'b001;B=4'b0001;
            #50 A=3'b111;B=4'b1111;
        end

    initial #150 $finish;
endmodule