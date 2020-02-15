#include "holberton.h"
#include <stdio.h>

/**
*print_triangle: prints a triangle
*description: prints a triangle based on the size(n)
*Return: 0
**/

void print_triangle(int size)
{
int rows;

int inside_triangle;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (inside_triangle = 1; inside_triangle <= size; inside_triangle++)
			{
				if (inside_triangle >= size - rows + 1)
				{
					_putchar('#');
				}
				else
					_putchar(' ');
			}




			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
