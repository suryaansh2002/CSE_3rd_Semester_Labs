module q62(j,k,clk,resetn,q);
input j,k,clk,resetn;
output q;
reg q;
always @(posedge clk)
if(resetn)
q<=0;
else
case({j,k})
0:q<=q;
1:q<=0;
2:q<=1;
3:q<=~q;
endcase
endmodule