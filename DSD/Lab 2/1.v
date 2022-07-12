module lab2q1(Cin,a,b,Sum,Cout);
input a,b,Cin;
output Cout,Sum;
assign Sum=a^b^Cin;
assign Cout=(a&b)|(a&Cin)|(b&Cin);
endmodule