#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a
 * sdimensional array of integers
 * @width: vertical dimension of array
 * @height: horizontal dimension of array
 * Return: NULL on failure, or if dimensions
 * are 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < width; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
