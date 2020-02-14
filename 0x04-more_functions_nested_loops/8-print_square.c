#include "holberton.h"
/**
*print_square - a function for printing squares
*
*Description: prints square using any character assigned
*
*@size: size of square
*
**/
void print_square(int size)
{
	int x;

	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

