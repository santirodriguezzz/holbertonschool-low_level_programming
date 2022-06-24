#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - funcion que retorna dos array en una string**
*@width: primer array
*@height:segundo array
*Return: array
*
*/

int **alloc_grid(int width, int height)
{
	int x, y;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(width * sizeof(int));

		if (array[y] == NULL)
		{
			for (x = 0; x <= y; x++)
				free(array[x]);
			free(array);
			return (NULL);
		}
		for (x = 0; width > x; x++)
		{
			array[y][x] = 0;
		}
	}
		return (array);
}
