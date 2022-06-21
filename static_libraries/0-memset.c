#include "main.h"
/**
 * _memset - funcion que llena la memoria con un byte constante
 * @n: numero de bytes en el area de memoria
 * @s: string
 * @b: byte constante
 * Return: puntero
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
