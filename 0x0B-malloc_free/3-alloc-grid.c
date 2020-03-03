#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * alloc_grid - returns a pointer to 2D grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int i, columns, rows, l;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	}
	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
			grid[rows][columns] = 0;
	}
	return (grid);
}
