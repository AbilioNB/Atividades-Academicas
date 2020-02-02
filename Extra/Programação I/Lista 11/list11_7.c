#include <stdio.h>
//head
int dado();

//body
int main() 
{
	//var 
	int vz=1,num,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
	//exec
	while (vz<=1000000)
	{
		
		num = dado();
		if (num == 1)
		{
			++cont1;
		}
		else if (num == 2)
		{
			++cont2;
		}
		else if (num==3)
		{
			++cont3;
		}
		else if (num == 4)
		{
			++cont4;
		}
		else if (num==5)
		{
			++cont5;
		}
		else
		{
			++cont6;
		}		
		++vz;		
	}	
	//exibição
	printf("A quantidade de vezes que o dado sorteou o numero 1 foi : %i\n", cont1);
	printf("A quantidade de vezes que o dado sorteou o numero 2 foi : %i\n", cont2);
	printf("A quantidade de vezes que o dado sorteou o numero 3 foi : %i\n", cont3);
	printf("A quantidade de vezes que o dado sorteou o numero 4 foi : %i\n", cont4);
	printf("A quantidade de vezes que o dado sorteou o numero 5 foi : %i\n", cont5);
	printf("A quantidade de vezes que o dado sorteou o numero 6 foi : %i\n", cont6);
	return 0;
}
int dado()
{
	int x;
	x = 1 + rand()%6 ;
	return x;
}