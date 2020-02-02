/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>
void prenc(int Vet[10]);
int mdif(int Vet[10]);
int main(){

	int Vet[10], dif=0;

	prenc(Vet);
	dif=mdif(Vet);
	printf("A maior diferença entre os numeros é de : %i\n",dif);

	return 0;
}
void prenc(int Vet[10]) {
	
	int cont;

	for (cont = 0; cont < 10; cont++) {
	
		printf("Informe o %i nuemro:",cont+1);
		scanf("%i",&Vet[cont]);	
	}
}
int mdif(int Vet[10]){

	int cont,dif=0,dfx=0;

	for (cont = 0; cont < 10; cont++) {

		dfx = Vet[cont + 1] - Vet[cont];

		if (dfx >= dif) 
		{	
			dif = dfx;
		}
	}
	return dif;

}