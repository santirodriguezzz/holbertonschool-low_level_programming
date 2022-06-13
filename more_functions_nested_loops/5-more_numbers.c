#include "main.h"
/**
 * more_numbers - imprime numeros del 0 al 14, 10 veces y nueva linea
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		}
	_putchar('\n');
	}
}
