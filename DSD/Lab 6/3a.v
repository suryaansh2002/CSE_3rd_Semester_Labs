module q63_1(clk,resetn,out);
input clk,resetn;
parameter N=4;
integer i;
output [N-1:0]out;
reg [N-1:0]out;
always @(posedge clk)
begin
if(!resetn)
out<=1;
else
begin
out[0]<=out[N-1];
for(i=N-1;i>0;i=i-1)
begin
out[i]<=out[i-1];
end
end
end
endmodule
