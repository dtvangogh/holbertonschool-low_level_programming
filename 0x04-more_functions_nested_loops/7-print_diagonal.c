#include "holberton.h"
/**
 *print_diagonal - print diagonal
 *
 *description-prints a diagonal shape using any assigned character
 *
 *@n: size of diagonal
 *
 **/

void print_diagonal(int n)
{
	int i;

	int spaces;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
