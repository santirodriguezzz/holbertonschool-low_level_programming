#include <stdio.h>
/**
 * main - imprime numero de argumentos
 * @argc: numero argumentos
 * @argv: unused
 * Return: siempre 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
