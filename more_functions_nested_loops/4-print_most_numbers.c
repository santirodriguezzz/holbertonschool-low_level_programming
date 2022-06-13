#include "main.h"
/**
 * print_most_numbers - muestra los numeros
 *
 * Return: siempre 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
			continue;
		else if (i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
