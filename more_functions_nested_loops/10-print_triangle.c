#include "main.h"
/**
 * print_triangle - dibuja un triangulo
 *
 * @size: tamanio triangulo
 */
void print_triangle(int size)
{
	int s, z, c;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (s = 1; s <= size; s++)
		{
			for (z = size; z > s; z--)
			{
				_putchar(32);
			}
			for (c = 1; c <= z; c++)
			{
				_putchar(35);
			}
			_putchar(10);

		}
	}
}
