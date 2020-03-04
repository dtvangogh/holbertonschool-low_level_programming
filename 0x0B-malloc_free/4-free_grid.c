#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*free_grid - frees memory space of 2 dimension grid
*Return: success
*@grid: the grid
*@height: grid height
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
