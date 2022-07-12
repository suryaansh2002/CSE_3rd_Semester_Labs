module q52(x,y,cin,s,cout);
input x,y,cin;
output s,cout;
wire [7:0]decOut;
decod24 d1({x,y},~cin,decOut[7:4]);
decod24 d2({x,y},cin,decOut[3:0]);
assign s = decOut[1]|decOut[2]|decOut[4]|decOut[7];
assign cout = decOut[3]|decOut[5]|decOut[6]|decOut[7];
endmodule
module decod24(w,en,y);
input [1:0]w;
input en;
output [3:0]y;
reg [3:0]y;
always @(w|en)
begin
case({en,w})
3'b000: y=4'b0001;
3'b001: y=4'b0010;
3'b010: y=4'b0100;
3'b011: y=4'b1000;
default: y=4'b0000;
endcase
end
endmodule
