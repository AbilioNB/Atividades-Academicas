/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>

void preB(float vetGanhos[12]);
void preG(float vetGastos[12]);
void preL(float vetGanhos[12],float vetGastos[12],float vetLucro[12]);
void exibV(float vetLucro[12]);

int main() {

	//var 
	float vetGanhos[12], vetLucro[12], vetGastos[12];
	
	 preB(vetGanhos);
	 preG(vetGastos);
	 preL(vetGanhos,vetGastos,vetLucro);
	 exibV(vetLucro);	
	return 0;
}
void preB(float vetGanhos[12]) {

	int cont;

	for (cont = 0; cont < 12; cont++) {

		printf("Informe qual a renda bruta do %i mes do ano  R$ : ", cont + 1); 
		scanf("%f", &vetGanhos[cont]);
	}
}
void preG(float vetGastos[12])
	{
			int cont;

		for (cont = 0; cont < 12; cont++) {

			printf("Informe quanto foi o gasto do %i mes do ano  R$ : ", cont + 1); 
			scanf("%f", &vetGastos[cont]);
		}	
}
void preL(float vetGanhos[12], float vetGastos[12], float vetLucro[12]) 
{
	int cont;

	for (cont = 0; cont < 12; cont++)
	{
		vetLucro[cont] = vetGanhos[cont] - vetGastos[cont];
		
	}
}
void exibV(float vetLucro[12]) {

	int cont;
	for (cont= 0; cont < 12; cont++)
	{
		printf("O  lucro do %i mes foi de R$ %.2f \n",cont+1,vetLucro[cont]);
		
	}
	

}