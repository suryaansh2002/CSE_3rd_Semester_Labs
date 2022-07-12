module lab1q3(f1,a,b,c,d);
input a,b,c,d;
output f1;
nand(k1,~b,~c);
nand(k2,~d,~b);
nand(k3,~a,~c,d);
nand(f1,k1,k2,k3);
endmodule
