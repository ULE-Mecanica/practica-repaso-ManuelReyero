#include <stdio.h>

int factorial(int uno);
int main()
{
	int a, b;
	printf("Introduce el numero del cual quieres saber su factorial: ");
	scanf("%i", &a);
	b = factorial(a);
	printf("El resultado del factorial es: %i \n", b);
}

int factorial(int uno)
{
	int i, result;
	result = 1;
	for (i=uno;i>0;i--)
	{
		result = result*i;
	}
	return 0;
}
