#include <stdio.h>

int main()
{
	
	int qw;
	float cl;

	printf("Informe a quantidade de quilowatts:");
	scanf("%f",&qw);
	
	if (qw < 10 )
		{
			cl=7+3.50;
			printf("O valor total da conta é R$ %.2f\n",cl);
		}
	else 
	{
		cl=(qw*1.40)+3.50
		printf("O valor total da conta é R$ %.2f\n",cl);
	}
		









	return 0;
}