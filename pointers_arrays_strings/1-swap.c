#include "main.h"
/**
 * swap_int - funcion para intercabiar los valores de dos numeros
 * @a: varieble para primer valor
 * @b: variable para segundo valor
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
