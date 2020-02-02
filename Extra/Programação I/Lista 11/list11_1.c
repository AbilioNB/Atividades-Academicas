#include <stdio.h>

float  n_real (float x);
int main () 
{

	//var 
	float n,resul;
	
	//exec
	printf ("Informe um numero : ");
	scanf("%f",&n);
	resul = n_real(n);
	printf(" %.0f\n",resul);

	return 0;
}
float  n_real (float x)
{
	if (x >= 0 ) 
	{
		float resp;
		resp = 1;
		return resp;
	}
	else 
	{
		float resp;
		resp = 0;
		return resp;
	}
}