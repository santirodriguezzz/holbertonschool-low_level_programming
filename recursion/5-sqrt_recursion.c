#include "main.h"
/**
 * iterador - variable
 * @i:variable
 * @n: variable
 * Return: valor i
 */
int iterador(int n, int i)
{
	if (n == 1)
		return (1);
	if (i < n)
	{


	if (i * i == n)
	{
		return (i);
	}
	else
	return (iterador(n, i + 1));

	}
	return (-1);
}
/**
  * _sqrt_recursion - funcion que devuelva raiz cuadrada natural de un num
  * @n: valor x numero
  * Return: valor i
 */
int _sqrt_recursion(int n)
{
	return (iterador(n, 1));
}
