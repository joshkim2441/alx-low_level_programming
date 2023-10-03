#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * @**grid: previously created grid
 * @height: vertical dimension of grid
 * @grid: the array of integers.
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
