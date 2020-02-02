#include <stdio.h>
//head 
int primo(int x);
//head
int main() 
{
//var 
	int n = 0,resp;

//exec
	printf("Informe um numero inteiro :");
	scanf("%i", &n);
	resp = primo(n);
	if (resp== 1)
	{
		printf("O numero informado é primo!!!\n");
	}
	else
	{
		printf("O numero informado não é primo!!!\n");
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