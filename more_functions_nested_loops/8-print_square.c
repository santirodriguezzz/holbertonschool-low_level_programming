#include "main.h"
/**
 * print_square - imprime un cuadrado
 *
 * @size: dimension
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar(10);
		}
	}
}
