module q53(w,F,G,H);
input [3:0]w;
wire [15:0]decOut;
output F,G,H;
dec3t8 d1(w[2:0],w[3],decOut[15:8]);
dec3t8 d2(w[2:0],~w[3],decOut[7:0]);
assign F = decOut[2]|decOut[4]|decOut[7]|decOut[9];
assign G = decOut[0]|decOut[3]|decOut[15];
assign H = decOut[0]|decOut[2]|decOut[10]|decOut[12];
endmodule
module dec3t8(w,en,y);
input [2:0]w;
input en;
output [7:0]y;
reg [7:0]y;
always @(w or en)
begin
if(en)
begin
y=0;
case(w)
3'b000: y=8'b00000001;
3'b001: y=8'b00000010;
3'b010: y=8'b00000100;
3'b011: y=8'b00001000;
3'b100: y=8'b00010000;
3'b101: y=8'b00100000;
3'b110: y=8'b01000000;
3'b111: y=8'b10000000;
default: y=0;
endcase
end
else
y=0;
end
endmodule