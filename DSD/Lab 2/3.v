module lab2q3(a,b,Cin,sum,Cout);
input [3:0] a,b;
input Cin;
output Cout;
output [3:0]sum;
wire [3:0]z,ss;
wire [3:1]c,cc;
wire k,c4;
adderbit stage0(Cin,a,b,z,c4);
assign k = (c4|(z[3] & z[2])|(z[3] & z[1]));
assign ss[0] = 0;
assign ss[1] = k;
assign ss[2] = k;
assign ss[3] = 0;
adderbit stage1(Cin,z,ss,sum,Cout);
endmodule

module adderbit(Cin,a,b,s,Cout);
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
