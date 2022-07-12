module lab1q2b(f1,a,b,c,d);
input a,b,c,d;
output f1;
assign f1 = (~a|b|~c)&(~a|b|~d)&(~a|~b|c)&(a|~b|~c);
