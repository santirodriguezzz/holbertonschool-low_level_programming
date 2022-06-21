#include <stdio.h>
/**
 * main - imprime numero de argumentos
 * @argc: numero argumentos
 * @argv: unused
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
