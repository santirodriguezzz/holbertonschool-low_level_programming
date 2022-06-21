#include "main.h"
#include <stddef.h>
/**
 * _strchr - unica un caracter en string
 * @s: string.
 * @c: caracter a localizar
 * Return: char c.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
