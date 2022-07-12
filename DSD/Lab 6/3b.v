module q63_2(clk,resetn,out);
input clk,resetn;
parameter N=5;
integer i;
output [N-1:0]out;
reg [N-1:0]out;
always @(posedge clk)
begin
if(!resetn)
out<=0;
else
begin
out[N-1]<=~out[0];
for(i=0;i<N-1;i=i+1)
begin
out[i]<=out[i+1];
end
end
end
endmodule