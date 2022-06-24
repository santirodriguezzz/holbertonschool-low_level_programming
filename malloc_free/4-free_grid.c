#include "main.h"
#include <stdlib.h>
/**
* free_grid - funcion que libera espacio
* @grid: array 1
* @height:array 2
* return: grid
*/
void free_grid(int **grid, int height)
{
	int y;

	grid = malloc(height * sizeof(int *));
	for (y = 0; y < height; y++)
	{
		free(grid[y]);
		free(grid);
	}
}
