/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>

void preB(float vetGanhos[12]);
void preG(float vetGastos[12]);
void preL(float vetGanhos[12],float vetGastos[12],float vetLucro[12]);
void exibV(float vetLucro[12]);
float somaB(float vetGanhos[12]);
float somaG(float vetGastos[12]);
float somaL(float vetLucro[12]);
int main() {
	//var 
	float vetGanhos[12], vetLucro[12], vetGastos[12],total_gastos=0,total_ganhos=0,total_lucro=0,lm=0;
	
	 preB(vetGanhos);
	 preG(vetGastos);
	 preL(vetGanhos,vetGastos,vetLucro);
	 exibV(vetLucro);	
	 total_ganhos=somaB(vetGanhos);
	 total_gastos=somaG(vetGastos);
	 total_lucro =somaL(vetLucro);
	 lm = total_lucro / 12;

	printf("O total de Ganhos no ano foi de R$ %.2f\n",total_ganhos);
	printf("O total de Gastos no ano foi de R$ %.2f\n ",total_gastos);
	printf("O total de Lucros no ano foi de R$ %.2f\n",total_lucro);
	printf("O lucro medio foi de R$ %.2f", lm);
	return 0;
}
void preB(float vetGanhos[12]){

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
float somaB(float vetGanhos[12]) {

	float res=0;
	int cont;

	for (cont = 0; cont < 12; cont++) 
	{
		res = res + vetGanhos[cont];
	}
	return res;
}
float somaG(float vetGastos[12]) {
	float res=0;
	int cont;
	for (cont = 0; cont < 12; cont++)
	{
		res = res + vetGastos[cont];
	}
	return res;
}
float somaL(float vetLucro[12]) {

	float res=0;
	int cont;
	for (cont = 0; cont < 12; cont++)
	{
		res = res + vetLucro[cont];
	}
	return res;
}


