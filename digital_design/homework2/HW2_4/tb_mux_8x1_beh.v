module tb_mux_8x1_beh;

    reg A,B,C,D;
    wire F;
    mux_8x1_beh uut(F,A,B,C,D);
    initial 
        begin
                A=0;B=0;C=0;D=0;
            #50 A=0;B=1;C=1;D=1;
            #50 A=1;B=1;C=1;D=1;
        end
        
    initial #150 $finish;

    
endmodule