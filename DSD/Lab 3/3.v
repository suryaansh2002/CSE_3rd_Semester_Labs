module mux8to1(W,S,f);
input [7:0] W;
input [2:0] S;
output f;
reg f;
always@(W or S)
begin
case(S[2:1])
0: f = (S[0])? (W[0]) : (W[1]);
1: f = (S[0])? (W[2]) : (W[3]);
2: f = (S[0])? (W[4]) : (W[5]);
3: f = (S[0])? (W[6]) : (W[7]);
endcase
end
endmodule

module mux2to1(W,S,f);
input [1:0] W;
input S;
output f;
reg f;
always@(W or S)
begin
if(~S)
f = W[0];
else
f = W[1];
end
endmodule

module lab3_3(W,S,f);
input [15:0] W;
input [3:0] S;
output f;
wire [1:0] temp;
mux8to1 stage0(W[7:0], S[2:0], temp[0]);
mux8to1 stage1(W[15:8], S[2:0], temp[1]);
mux2to1 stage2(temp, S[3], f);
endmodule
