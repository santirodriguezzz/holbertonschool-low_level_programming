#include "main.h"
/**
 * print_line - funcion que dibuja linea recta en terminal
 *
 * @n: numero dado por usuario
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
