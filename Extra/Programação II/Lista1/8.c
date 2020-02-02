/*Desenvolvido por : Abílio Nogueira 
Email : abilionbarros@gmail.com*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//var 
	int dado[1000],cont,ct1=0,ct2=0,ct3=0,ct4=0,ct5=0,ct6=0;
	srand(time(NULL));
	for (cont = 0; cont < 1000; cont++) 
	{
		
		dado[cont] = rand() % 6 + 1 - 0;
			
		if (dado[cont] == 1) 
		{
			ct1 = ct1 + 1;
		}
		else if (dado[cont] == 2)
				{
					ct2 = ct2 + 1;
				}
		else if (dado[cont] == 3)
				{
					ct3 = ct3 + 1;
				}
		else if (dado[cont] == 4)
				{
					ct4 = ct4 + 1;
				}
		else if (dado[cont] == 5)
				{
					ct5 = ct5 + 1;
				}
		else {
				
				ct6 = ct6 + 1;
				}
	}
	printf("A quantidade de vezes que o dado resultado em 1 foi de : %i\n", ct1);
	printf("A quantidade de vezes que o dado resultado em 2 foi de : %i\n", ct2);
	printf("A quantidade de vezes que o dado resultado em 3 foi de : %i\n", ct3);
	printf("A quantidade de vezes que o dado resultado em 4 foi de : %i\n", ct4);
	printf("A quantidade de vezes que o dado resultado em 5 foi de : %i\n", ct5);
	printf("A quantidade de vezes que o dado resultado em 6 foi de : %i\n", ct6);
	return 0;
}
