#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: tamaño array
 * @action: funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action && array)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
		
	}
}
