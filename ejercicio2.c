#include <stdio.h>
int divide(int a, int b);
int main()
{
	int x, y, z;
	printf("Escribe dos numeros: \n");
	scanf("%i", &x);
	scanf("%i", &y);
	z = divide(x, y);
	printf("El resultado de la operaciones: %i \n", z);
}

int divide(int a, int b)
{
	int dev = 0;
	while (a>=b)
	{
		a = a-b;
		dev++;
	}
	return dev;
}
	
