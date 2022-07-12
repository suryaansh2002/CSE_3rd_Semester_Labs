module q51(w,en,F,G,H);
input [3:0]w;
input en;
wire [15:0]decOut;
output F,G,H;
dec4t16 d1(w[3:0],en,decOut);
assign F = decOut[3]|decOut[6]|decOut[7]|decOut[10]|decOut[11]|decOut[14];
assign G = decOut[2]|decOut[3]|decOut[10]|decOut[14];
assign H = decOut[0]|decOut[1]|decOut[3]|decOut[7]|decOut[14]|decOut[15];
endmodule
module dec4t16(w,en,y);
input [3:0]w;
input en;
output [15:0]y;
wire [3:0]temp;
dec2t4 d1(w[3:2],en,temp);
dec2t4 d2(w[1:0],~temp[0],y[3:0]);
dec2t4 d3(w[1:0],~temp[1],y[7:4]);
dec2t4 d4(w[1:0],~temp[2],y[11:8]);
dec2t4 d5(w[1:0],~temp[3],y[15:12]);
endmodule
module dec2t4(w,en,y);
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