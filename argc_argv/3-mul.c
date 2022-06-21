#include <stdio.h>
#include <stdlib.h>
/**
 * main - imprime la multiplicacion de 2 num
 * @argc: numero argumentos
 * @argv: unu
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
