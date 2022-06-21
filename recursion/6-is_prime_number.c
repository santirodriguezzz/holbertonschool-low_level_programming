#include "main.h"
/**
* prm - verifica numero primo
* @n: numero para chequeo
* @i: numero para dividir numero primo
* Return: 1 si es primo, 0 si no es primo
*/
int prm(int n, int i)
{
	if (i == n)
		return (1);
	if (n == 1)
		return (0);
	if (n <= 0)
		return (0);
	if (n % i == 0)
		return (0);
	return (prm(n, i + 1));
}

/**
 * is_prime_number -función que devuelva 1
 *@n:valor
 *Return: 1 si es primo, 0 si no.
 */
int is_prime_number(int n)
{
	return (prm(n, 2));
}
