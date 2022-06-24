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
	int x;

	grid = malloc(height * sizeof(int *));
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
		free(grid);
	}
}
