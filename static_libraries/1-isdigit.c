#include "main.h"
/**
 * _isdigit - funcion que verifica un numero (0 a 9)
 * @c: letra
 * Return: 1 si c es un numero
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
