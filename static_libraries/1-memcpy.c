#include "main.h"
/**
 * _memcpy -funcion que copie un area de memoria
 * @src: source - ctrl + c
 * @dest: destination - ctrl v
 * @n: numero de bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
