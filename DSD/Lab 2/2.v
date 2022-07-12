module lab2q2(Cin,a,b,s,Cout);
input Cin;
input [3:0] a,b;
output [3:0] s;
output Cout;
wire[3:1] c;
fulladd stage0(Cin,a[0],b[0]^Cin,s[0],c[1]);
fulladd stage1(c[1],a[1],b[1]^Cin,s[1],c[2]);
fulladd stage2(c[2],a[2],b[2]^Cin,s[2],c[3]);
fulladd stage3(c[3],a[3],b[3]^Cin,s[3],Cout);
endmodule

module fulladd(Cin,a,b,Sum,Cout);
input a,b,Cin;
output Cout,Sum;
assign Sum = a^b^Cin;
assign Cout = (a&b)|(a&Cin)|(b&Cin);
endmodule