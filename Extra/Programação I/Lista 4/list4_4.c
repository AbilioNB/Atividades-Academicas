#include <stdio.h>

int main() {

	float sl_i,bn,sl_nw,aumt;
	

	printf("Informe seu salário atual: R$ ");
	scanf("%f", &sl_i);

	if (sl_i <= 900)
	{
		aumt = sl_i*0.20;
	}
		else if (900 < sl_i >= 1300)
									{
											aumt=sl_i*0.15;
										}
			else if (1300<sl_i>=180)
										{
											aumt=sl_i*0.10;
										}	
				else
			{
											aumt=sl_i*0.05;
			}
			
	sl_nw = sl_i + aumt;
	printf("O jogador terá aumento de R$ %.2f e passará a receber R$%.2f.", aumt, sl_nw);


	return  0;
}