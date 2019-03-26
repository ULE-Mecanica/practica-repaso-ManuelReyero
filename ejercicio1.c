#include <stdio.h>
int multiplica(int a, int b);
int main()
{
	int x, y, z;
	printf("Escribe dos numeros: \n");
	scanf("%i", &x);
	scanf("%i", &y);
	z = multiplica(x, y);
	printf("El resultado de la operaciones: %i \n", z);
}

int multiplica(int a, int b)
{
	int i, dev;
	dev = 0;
	for (i=b;i>0;i--)
	{
		dev = dev + a;
	}
	return dev;
}
	
