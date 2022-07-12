module l7q1a(clk, reset, cnt);
input clk, reset;
output [3:0]cnt;
reg [3:0]cnt;
always @(posedge clk) begin
if(!reset)
cnt<=0;
else
cnt<=cnt+1;
end
endmodule