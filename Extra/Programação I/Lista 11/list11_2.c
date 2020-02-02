#include <stdio.h>

int n_nulo (float x);
int main () {

	//var 
	float n;
	int resul;
	//exec
	printf ("Informe um numero : ");
	scanf("%f",&n);
	resul = n_nulo(n);
	printf(" %i \n",resul);	
	return 0;
}
int n_nulo (float x)
{
	int resp;
	if ( x == 0 )
	{
		resp = 1;
		return resp;
	}
	else 
	{
		resp = 0;
		return resp;
	}
}