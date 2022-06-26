#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - funcion que asigna memoria con malloc
*@b: valor para array
*Return: array
*/
void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
	{
		free(array);
		exit(98);
	}
	return (array);
}
