#include "main.h"
/**
 *  reverse_array - funcion que invierta el contenido de un array
 *  @a: variable array
 *  @n: variable
 */
void reverse_array(int *a, int n)
{
	int i = 0, x;

	for (n = n - 1; i < n; i++, n--)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
