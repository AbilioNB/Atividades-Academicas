 #include <stdio.h>

int main () {

	float v_a,v_b,x;

	printf ("Informe o valor de A : ");
	scanf ("%f",&v_a);
	printf ("Informe o valor de B : ");
	scanf ("%f",&v_b);

	if (v_a!= 0)
	{
		x = -v_b/v_a;
			printf ("O valor de  X é : %.1f",x);
	}
	else
	{
		printf ("O valor de A é igual a zero por isso não pode ser execuado.");
	}
	return 0;
}