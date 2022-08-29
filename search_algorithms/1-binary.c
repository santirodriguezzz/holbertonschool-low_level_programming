#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int temp;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	size = size - 1;
	while (i <= size)
	{
		print_array(array, i, size);

		temp = (size - i) / 2 + i;
		if (array[temp] == value)
			return (temp);
		else if (array[temp] < value)
		{
			i = temp + 1;
		}
		else
		{
			size = temp - 1;
		}
	}
	return (-1);
}

/**
 * print_array - print the current array given rules on format
 * @array: array to print
 * @inc: starting incrementer index
 * @size: increment up to this size
 */
void print_array(int *array, size_t inc, size_t size)
{
	printf("Searching in array: ");
	for (; inc <= size; inc++)
	{
		printf("%d", array[inc]);
		if (inc < size)
			printf(", ");
	}
	printf("\n");
}
