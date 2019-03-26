#include <stdio.h>

int main ()
{
	int i, a;
	i=2;
	printf("Escribe su contaseña: ");
	scanf("%i", &a);
	while (i>0)
	{
		i--;
		if (a == 4567)
		{
			printf("Bienvenido al sistema.\n");
			return 0;
		}
		else
		{
			if (a>4567)
			{
				printf("La contraseña es incorrecta (mayor), introduzca una nueva: ");
				scanf("%i", &a);
			}
			else
			{
				printf("La contraseña es incorrecta (menor), introduzca una nueva: ");
				scanf("%i", &a);
			}
		}
	}
	if (a == 4567)
	{
		printf("Bienvenido al sistema.\n");
	}
	else
	{
		if (a>4567)
		{
			printf("La contraseña es incorrecta (mayor), sistema bloqueado. ");
		}
		else
		{
			printf("La contraseña es incorrecta (menor), sistema bloqueado. ");
		}
	}
return 0;
}	

