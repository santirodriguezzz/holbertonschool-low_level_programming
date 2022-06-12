#include "main.h"
/**
 * jack_bauer - programa para mostrar todos los minutos de un dia
 *
 * Return: 0
 */
void jack_bauer(void)

{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(58);
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
