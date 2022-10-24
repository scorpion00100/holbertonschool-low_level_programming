#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: columns
 * @height: rows
 * Return: point to array 2D
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int d, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		grid[d] = malloc(width * sizeof(int));
		if (grid[d] == NULL)
		{
			for (d = 0; d < height; d++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[d][b] = 0;
	}

	return (grid);
}
