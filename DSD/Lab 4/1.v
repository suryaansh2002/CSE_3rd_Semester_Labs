module q41(B,E);
input [3:0]B;
output [3:0]E;
assign E[0] = ~B[0];
eighttoonemux stage0({1'b0,1'b0,1'b0,1'b1,1'b1,B[0],1'b0,1'b0}, B[3:1], E[3]);
eighttoonemux stage1({1'b0,1'b0,1'b0,B[0],1'b0,~B[0],1'b1,B[0]}, B[3:1], E[2]);
eighttoonemux stage2({1'b0,1'b0,1'b0,~B[0],B[0],~B[0],B[0],~B[0]}, B[3:1], E[1]);
endmodule
module eighttoonemux(w,s,f);
input [7:0]w;
input [2:0]s;
output f;
reg f;
always @(w or s)
begin
case(s)
0: f = w[0];
1: f = w[1];
2: f = w[2];
3: f = w[3];
4: f = w[4];
5: f = w[5];
6: f = w[6];
7: f = w[7];
endcase
end
endmodule