module tb_Full_adder;
    
    reg x,y,z;

    wire S,C;

    Full_adder uut (S,C,x,y,z);
    initial 
        begin
                x=0;y=0;z=0;
            #50 x=0;y=0;z=1;
            #50 x=1;y=1;z=1;

        end
    initial #150 $finish;
endmodule