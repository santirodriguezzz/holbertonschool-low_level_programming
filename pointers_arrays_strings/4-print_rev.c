#include "main.h"
/**
 * print_rev - funcion que imprima una cadena al reves seguido de nueva linea
 * @s: variable string
 */
void print_rev(char *s)
{

	int count = 0, x;

	while (s[count] != '\0')
	{
		count++;
	}
	for (x = count - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
