#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: first element in array
 * @size: number of elements in array
 * @value: is the value to search for
 * Retrun: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
