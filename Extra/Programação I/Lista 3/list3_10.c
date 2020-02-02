#include <stdio.h>

int main ()
{
	int hr_e,hr_f,hr_r,grat;



	printf("Informe o número de horas extras trabalhadas:");
	scanf("%i",&hr_e);
	printf("Informe o número de horas que faltou:");
	scanf("%i",&hr_f);

	hr_r=hr_e-(hr_f*2/3);
	if (hr_r>40)
	{
		grat=200;
	}
			else if (30<hr_r<=40)
	{
				grat=175;
	}
					else if (20<hr_r<= 30)
		{
						grat=150;

									else if (10<hr_r<= 20 )
									{
										grat=125;
									}
																else if (hr_r<=10)
																{
																	grat=100
																}
		}

		printf("O funcionário receberá R$ %.2i de gratificação de Natal",grat);

	return 0;
}