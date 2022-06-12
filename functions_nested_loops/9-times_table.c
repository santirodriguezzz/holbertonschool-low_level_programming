#include "main.h"
/**
 * times_table - fincion que imprime 9 veces la tabla desde 0
 * Return: 0
 */
void times_table(void)
{
	int num, mult, res;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			res = num * mult;
			if (res / 10 == 0)
			{
				if (mult == 0)
				{
					_putchar((res % 10) + '0');
					if (mult < 9)
						_putchar(44);
					else
						_putchar('\n');
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar((res % 10) + '0');
					if (mult < 9)
						_putchar(44);
					else
						_putchar('\n');
				}
			}
			else
			{
			_putchar(32);
			_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
			if (mult < 9)
				_putchar(44);
			else
				_putchar('\n');
			}
		}
	}
}
