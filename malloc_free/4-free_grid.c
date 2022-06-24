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
	int x, y = 0;

	grid = malloc(height * sizeof(int *));
	for (x = 0; x <= y; x++)
	{
		free(grid[x]);
		free(grid);
	}
}
