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

	for (x = height - 1; x >= 0; x--)
		free(grid[x]);
	free(grid);
}
