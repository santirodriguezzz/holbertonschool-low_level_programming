#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - fucnion que busca valor por cmp
* @array: array check
* @size: tamaño de array
* @cmp: puntero que apunta a un array
* Return: i
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
