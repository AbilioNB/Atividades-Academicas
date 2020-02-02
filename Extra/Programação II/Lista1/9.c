/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	//var 
	float x[100], y[100],total=0;
	int cont;


	for (cont = 0; cont < 100; cont++)
	{
		total = (x[cont] * y[cont]) + total;	
	}
	printf("O total é = %.2f", total);
	return 0;
}
