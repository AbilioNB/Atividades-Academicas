/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/

#include <stdio.h>
#include <stdlib.h>
void prencA(int A[5]);
void prencB(int B[5]);
void somaAB(int A[5], int B[5],int C[5]);
int main (){
	//var 
	int A[5], B[5], C[5],cont;
	prencA(A);
	prencB(B);
	somaAB(A, B, C);
	//exibir vetor C 
	for (cont = 0; cont < 5;cont++) {
		printf("%i\n", C[cont]);
		}
	
	
return 0;
}
void prencA(int A[5]) {
	//preenchendo o valor de A 
	int cont;
		for (cont = 0; cont < 5; cont++)
		{
			printf("Informe o %i º valor de A : ", (cont + 1));
			scanf("%i", &A[cont]);
		}

}
void prencB(int B[5]) {
	//preenchendo o valor de B 
	int cont;
		for (cont = 0; cont < 5; cont++)
		{
			printf("Informe o %i º valor de B : ", (cont + 1));
			scanf("%i", &B[cont]);
		}
	
}
void somaAB(int A[5], int B[5], int C[5]) {
	//soma dos vetores
	int cont;
		for (cont= 0; cont < 5; cont++)
		{
			C[cont] = A[cont] + B[cont];
		}
}
