#include "main.h"
#include <stdio.h>
/**
 * print_array -funcion que muestra contenido de un n array
 *
 *@a: variable string
 *
 *@n: variable numero
 *
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);

	}
	printf("\n");
}
