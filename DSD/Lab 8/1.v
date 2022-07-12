module l8q1(x, y, x1, y1);
input x,y;
output x1,y1;
reg xo;
twotoonemux mux1(~x,x,y,xo);
twotoonemux mux2(~y,y,xo,y1);
twotoonemux mux3(~y1,y,xo,x1);
endmodule
module twotoonemux(k0,k1,s,y);
input k0,k1,s;
output y;
assign y=s?k1:k0;
endmodule