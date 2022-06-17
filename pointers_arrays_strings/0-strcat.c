#include "main.h"
#include <stdio.h>
/**
 * *_strcat - funcion que concatena 2 strings
 *@dest: vaiable string que recibe datos
 *@src: variable string que envia datos
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, x;

	for (i = 0; dest[i]; i++)
	;

	for (x = 0; src[x]; x++)
	{
		dest[i] = src[x];
		i++;
	}
	dest[i] = src[x];
	return (dest);
}
