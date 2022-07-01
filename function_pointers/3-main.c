#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - funcion
 * @argc: int
 * @argv: int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*x)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = get_op_func(argv[2]);
	if (x == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", x(a, b));
	return (0);
}
