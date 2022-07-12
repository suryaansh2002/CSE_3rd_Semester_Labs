module l7q1b(clk, up, resetn, c);
input clk, resetn, up;
output [2:0]c;
reg [2:0]c;
always @(posedge clk)
begin
if(!resetn)
c<=0;
else
begin
if(up)
c<=c+1;
else
c<=c-1;
end
end
endmodule