#include "main.h"
/**
 * cap_string - funcion que escribe string en mayuscula
 * @i: variable string
 * Return: string en mayuscula
 */
char *cap_string(char *i)
{
	int x;

	for (x = 0; i[x]; i++)
	{
		if (x == 0 && i[x] >= 97 && i[x] <= 122)
			i[x] -= 32;
		if ((i[x - 1] == 44 || i[x - 1] == 59 || i[x - 1] == 46
			|| i[x - 1] == 33 || i[x - 1] == 63
			|| i[x - 1] == 34 || i[x - 1] == 40
			|| i[x - 1] == 41 || i[x - 1] == 123
			|| i[x - 1] == 125 || i[x - 1] == 32
			|| i[x - 1] == '\n')
			&& (i[x] >= 97 && i[x] <= 122))
		{
			i[x] -= 32;
		}
	}
	return (i);
}
