module problem4(SO,SI,clk);
    output SO;
    input SI,clk;
    reg [3:0]Q; 
    assign SO=Q[0];
    always@(posedge clk)
        Q={SI,Q[3:1]};
endmodule