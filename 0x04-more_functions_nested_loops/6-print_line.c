#include "holberton.h"
#include <stdio.h>

/**
*print_line - print two lines
*
*Description: print lines
*
*Return: 0
*
**/
void print_line(int n)
{
	int i;

	if (n > 0)

	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}

