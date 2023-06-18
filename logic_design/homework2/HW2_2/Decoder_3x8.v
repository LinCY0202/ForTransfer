module Decoder_3x8(
	input x,y,z,
	output [7:0] D
	);
	wire D0_wire,D1_wire,D2_wire;
	
	assign  D0_wire=!(z);
	assign	D1_wire=!(y);
	assign	D2_wire=!(x);
	assign	D[0]=D0_wire&&D1_wire&&D2_wire;
	assign	D[1]=z&&D1_wire&&D2_wire;
	assign	D[2]=D0_wire&&y&&D2_wire;
	assign	D[3]=z&&y&&D2_wire;
	assign	D[4]=D0_wire&&D1_wire&&x;
	assign	D[5]=z&&D1_wire&&x;
	assign	D[6]=D0_wire && y && x;
	assign	D[7]=z&&y&&z;
endmodule
