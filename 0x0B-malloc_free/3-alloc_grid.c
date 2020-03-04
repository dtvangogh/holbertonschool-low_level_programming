#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to 2D grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int  columns, rows;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(width * sizeof(int));
		if (grid[rows] == NULL)
		{
			return (NULL);
		}
	}
	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
			grid[rows][columns] = 0;
	}
	return (grid);
}
