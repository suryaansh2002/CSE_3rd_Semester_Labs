module lab1q2a(b,c,d,f1);
input b,c,d;
output f1;
assign f1 = (~b&d)|(~b&c)|(~c&~d&b);
endmodule
