#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - funcion que imprme todos los numeros naturales desde n hasta98
 * @n: alamcena el valor de n
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	else
		printf("%d", n);
	putchar('\n');
}
