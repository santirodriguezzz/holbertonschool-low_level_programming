#include "main.h"
/**
 * _atoi -funcion que devuelva longitud de string
 * @s: string
 * Return: longitud string
 */
int _atoi(char *s)
{
	if (*s)
	{
	return (1 + _atoi(s + 1));
	}
	return (0);
}
