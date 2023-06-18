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

module Full_adder(S,C,x,y,z);
    input x,y,z;
    output S,C;

    wire [7:0]D_wire;
    Decoder_3x8 uut(
        .x(x),
        .y(y),
        .z(z),
        .D(D_wire)
    );

    assign S=D_wire[1]|D_wire[2]|D_wire[4]|D_wire[7];
    assign C=D_wire[3]|D_wire[5]|D_wire[6]|D_wire[7];

endmodule