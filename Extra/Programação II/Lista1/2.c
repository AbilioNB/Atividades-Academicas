/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/

#include <stdio.h>
#include <stdlib.h>
void prencA (int A[10]);
void testeB(int B[10], int A[10]);
int main (){
	//var 
	int A[10], B[10],cont;
	prencA(A);
	testeB(B, A);
return 0;
}
void prencA(int A[10]){
	//preenchendo o valor de A 
	int cont;
	for (cont = 0; cont < 10; cont ++) 
	{
		printf("Informe o %i º valor : ", (cont+1));
		scanf("%i",&A[cont]);
	}
	
}
void testeB(int B[10],int A[10]) {
	int cont;
	for (cont = 0; cont <10; cont++) {
	
		if (A[cont] % 2 == 0) {
		
			B[cont] = A[cont] / 2;
		}
		else {
			B[cont] = A[cont]*3;
		}
		
		
	}


}