module problem3(
  output reg y_out, 
  input x_in, clock, reset
);
  reg [2:0]state;
  parameter	a=3'b000,b=3'b001,d=3'b010,f=3'b011,g=3'b100;

  always@(posedge clock,negedge reset)
    if (reset==0) state<=a;
    else case(state)
      a:if(x_in) begin state<=b; assign y_out=0;end  else begin state<=f;assign  y_out=0;end
      b:if(x_in) begin state<=a; assign y_out=0;end  else begin state<=d; assign y_out=0;end
      d:if(x_in) begin state<=a; assign y_out=0;end  else begin state<=g; assign y_out=1;end
      f:if(x_in) begin state<=b; assign y_out=1;end  else begin state<=f;assign  y_out=1;end
	  g:if(x_in) begin state<=d; assign y_out=1;end  else begin state<=g; assign y_out=0;end
    endcase 	
endmodule 
