#include "main.h"
/**
 *  _strlen - funcion que muestre la longitud de string
 *  @s: variable string
 *  Return: largo del string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
