module q61(t,clk,resetn,q);
input t,clk,resetn;
output q;
reg q;
always @(negedge clk or negedge resetn)
if(!resetn)
q<=0;
else
if(t)
q<=~q;
else
q<=q;
endmodule