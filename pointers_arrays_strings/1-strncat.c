#include "main.h"
#include <stdio.h>
/**
 * *_strncat -funcion que concatena 2 strings con un tope
 *
 * @dest: variable string que recibe datos
 * @src: variable string que envia datos
 * @n: tope
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x;

	if (dest[0] != '\0' && src[0] != '\0')
	{

		for (i = 0; dest[i]; i++)
		;

		for (x = 0; x < n; x++)
		{
		dest[i] = src[x];
		i++;
		}
	}
	return (dest);
}
