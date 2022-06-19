#include "main.h"
/**
 * leet - funcion que escribe string en 1337
 * @i: string
 * Return: i.
 */
char *leet(char *i)
{
	int f = 0, x;
	char letras[] = {65, 69, 79, 84, 76};
	int numeros[] = {52, 51, 48, 55, 49};

	while (i[f])
	{
		x = 0;
		while (letras[x])
		{
			if (i[f] == letras[x] || i[f] == (letras[x] + 32))
			{
				i[f] = numeros[x];
			}
			x++;
		}
		f++;
	}
	return(i);
}
