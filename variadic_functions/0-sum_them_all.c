#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - retorna suma de parametros
 * @n: numero parametros
 * Return: suma de parametros
 */
int sum_them_all(const unsigned int n, ...)

{
	int sum;
	unsigned int x;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
