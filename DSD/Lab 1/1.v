module lab1q1(a,b,c,f1,f2);
input a,b,c;
output f1,f2;
not(k1,c);
not(k2,b);
and(h1,a,k1);
and(h2,b,c);
and(h3,k1,k2);
or(f1,h1,h2,h3);
assign f2 = (a|~b|c)&(a|b|c)&(~a|b|~c);
endmodule
