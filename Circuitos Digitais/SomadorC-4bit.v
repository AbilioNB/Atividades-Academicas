module meio_somador_4b(A,B,Cin,Cout,S);
    
input [3:0] A;
input [3:0] B;
input Cin;
output Cout;
input [3:0] S;

assign S[0] = A[0] ^ B[0];//Xor para fazer a soma
assign C[0] = A[0] & B[0];//E para fazer o carry out

assign S[1] = A[1] ^ B[1];
assign C[1] = A[1] & B[1];

endmodule // meio_somador_4b


