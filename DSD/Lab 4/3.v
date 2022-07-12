module q3(x, f);
input [15:0]x;
output [3:0]f;
reg [3:0]f;
integer i;
always @(x)
begin
for(i = 0; i<=15; i= i+1)
begin
if(x[i] == 1'b1)
begin
f = i;
end
end
end
endmodule