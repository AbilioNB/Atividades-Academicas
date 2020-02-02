#include <stdio.h>

int main()
{
	int id;
	float peso,ds_mg,ds_ml,ng;

	printf("Informe a idade do paciente:");
	scanf ("%i",&id);
	printf("Informe o peso do paciente:");
	scanf ("%f",&peso);

	if (id>=12)
	{
		if (peso >=60)
		{
			ds_mg=1000;
		}
		else
			ds_mg=875;
	}

	else {
			if (peso <5)
			{
				ds_mg=0;
			}
			else if (peso <=9 )
			{
				ds_mg=125;
			}
			else if (peso <=16)
			{
				ds_mg=375;
			}
			else if (peso <= 30)
			{
				ds_mg=500;
			}
			else{
				ds_mg=750
			}
	}

ds_ml=ds_mg/500;
ng=ds_ml*20;
printf("A quantidade de gotas é : %.0f\n",ng);



	return 0;
}