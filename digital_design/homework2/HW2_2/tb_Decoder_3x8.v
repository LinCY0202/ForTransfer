module tb_Decoder_3x8;
    reg x,y,z;
    wire [7:0]D;

    Decoder_3x8 uut(D,x,y,z);
    initial 
        begin

            x=1;y=1;z=1;
        #50 x=0;y=0;z=0;  
        #50 x=0;y=0;z=1;

        end
    initial #150 $finish;

endmodule