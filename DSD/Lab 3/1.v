module lab3_1(g,b); 
parameter n=3; 
input[n:0]g; 
output[n:0]b; 
reg[n:0]b; 
integer k; 
always@(g) 
begin
 b[n]=g[n]; 
for(k=n-1;k>=0;k=k-1) 
begin 
b[k]=b[k+1]^g[k];
end 
end endmodule 
