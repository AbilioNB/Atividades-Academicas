#include <stdio.h>

int main() {

	int cd_p, qt_p;
	float prec, total_b, desc, total_l;

	printf("Informe o código do produto: ");
	scanf("%i", &cd_p);
	printf("Informe a quantidade do produto :");
	scanf("%i", &qt_p);

	if (cd_p <=10)
	{
		prec = 9.50;
		total_b = prec*qt_p;
	}
	else if (qt_p<=20)
	{
		prec = 13.25;
		total_b = prec*qt_p;
	}
		else if (qt_p<=30)
	{
			prec = 24.10;
			total_b = prec*qt_p;
	}
		else if (qt_p >= 40)
		{
			prec = 37.75;
			total_b = prec*qt_p;
		}
		
	if (total_b <=1500)
	{
		desc = total_b*0.025;
	}
	else if (total_b <=3000)
	{
		desc = total_b*0.05;

	}
	else if (total_b > 3000)
	{
		desc = total_b*0.10;
	}
	
	total_l = total_b - desc;

	printf("O preço	unitário do produto foi:R$ %.2f\n",prec);
	printf("O valor total da compra foi :R$ %.2f \n ",total_b);
	printf("O valor dos descontos aplicados foi de R$ %.2f \n", desc);
	printf("O valor final da compra foi de R$ %.2f \n", total_l);
	
	return  0;
}