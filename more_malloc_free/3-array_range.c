#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - funcion
 * @min: valor minimo
 * @max: valor maximo
 * Return: puntero a array
 */
int *array_range(int min, int max)
{
	int *array;
	int larg, x;

	if (min > max)
		return (NULL);
	larg = max - min + 1;
	array = malloc(larg * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (x = 0; min <= max; x++, min++)
		array[x] = min;
	return (array);
}
