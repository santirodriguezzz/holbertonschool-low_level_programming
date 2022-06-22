#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - imprime la multiplicacion de 2 num
 * @argc: numero argumentos
 * @argv: unu
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int x, y, suma;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (isdigit(argv[x][y]) == 0)
			{
			printf("Error\n");
			return (1);
			}
		}
	}

	suma = 0;

	for (x = 1; argv[x]; x++)
	{
		suma += atoi(argv[x]);
	}
	printf("%d\n", suma);
	return (0);
}
