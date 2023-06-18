module problem3 (y_out, x_in, clock, reset);

	output reg y_out;
	input  x_in, clock, reset;
	
	reg [2:0] state,next_state;
	parameter a=3'b000, b=3'b001, d=3'b010, f=3'b011, g=3'b100;
	
	always @ (posedge clock, negedge reset)
		if(reset == 0) state <= a;
		else state <= next_state;
		
	always @ (state, x_in)
		case(state)
			a: if(x_in) next_state <= b; else next_state <= f;
			b: if(x_in) next_state <= a; else next_state <= d;
			d: if(x_in) next_state <= a; else next_state <= g;
			f: if(x_in) next_state <= b; else next_state <= f;
			g: if(x_in) next_state <= d; else next_state <= g;
		endcase
	
	always @ (state, x_in)
		case(state)
			a: y_out = 0;
			b: y_out = 0;
			d: y_out = ~x_in;
			f: y_out = 1;
			g: y_out = x_in;
		endcase
	
endmodule