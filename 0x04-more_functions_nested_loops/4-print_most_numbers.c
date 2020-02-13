#include "holberton.h"
#include <stdio.h>

/**
*print_most_numbers - print numbers except 2 and 4
*
*Description: print numbers 0 - 9 excluding 2 and 4
*
*Return: 0
*
**/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	if (num != 2 && num != 4)
		_putchar (num + '0');
	}
		_putchar ('\n');
	}
