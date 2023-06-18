module Decoder_3x8(D,x,y,z);

	input x,y,z;
	output [7:0]D;
	
	wire N_x,N_y,N_z;


    assign N_x=!x;
    assign N_y=!y;
    assign N_z=!z;
	assign D[0]=N_x&N_y&N_z;
    assign D[1]=N_x&N_y&z;
    assign D[2]=N_x&y&N_z;
    assign D[3]=N_x&y&z;
	assign D[4]=x&N_y&N_z;
    assign D[5]=x&N_y&z;
    assign D[6]=x&y&N_z;
    assign D[7]=x&y&z;

endmodule