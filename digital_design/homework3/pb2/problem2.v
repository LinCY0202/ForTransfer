module problem2(y_out,x_in,clock,reset);
	
	output reg y_out;
	input x_in,clock,reset;
	
	reg [3:0]state;
	parameter S0=4'b000,S1=4'b001,S2=4'b010,S3=4'b011,S4=4'b100,S5=4'b101,S6=4'b110;
	
	always@(posedge clock,negedge reset)
		if(reset==0) state<=S0;
		else case(state)
			S0: if(x_in) state<=S0;else state<=S1;
			S1: if(x_in) state<=S2;else state<=S1;
			S2: state<=S3;
			S3: state<=S4;
			S4: state<=S5;
			S5: state<=S6;
			S6: state<=S0;


			
		endcase
		
	always@(state,x_in)
		case(state)
			S0: y_out=0;
			S1: y_out=0;
			S2: y_out=1;
			S3: y_out=1;
			S4: y_out=1;
			S5: y_out=0;
			S6: y_out=0;

		endcase
		
endmodule