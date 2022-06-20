#include "main.h"
/**
 * factorial -funcion que devuelve factorial de numero
 * @n:string
 * Return: valor de x elevado a potencia de y
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	if (n < 0)
	{
	return (-1);
	}
	return (n * factorial(n - 1));

}
