#include <stdio.h>
//head 
int primo(int x);
//head
int main()
{
	//var 
	int n = 1, resp, qt, i,cont_p=0;

	//exec
	printf("Informe a quantidade de numeros primos desejados :");
	scanf("%i",&qt);
	for (n = 1; cont_p < qt;++n)
	{
		resp = primo(n);
		if (resp == 1)
		{
			printf("%i\n", n);
			++cont_p;
		}
	}	
	
	return 0;
		
}

int primo(int x)
{
	int resp=1, i;
	//teste para saber se é primo
	for (i = 2; i <= (x - 1); i++)
	{
		if (x % i == 0)
		{
			resp = 0;
			//finaliza o laço caso seja executado
			break;
		}
	}
	return resp;
}