#include "holberton.h"
#include <stdio.h>

/**
*more_numbers - print numbers 0-14 ten times
*
*Description: print numbers 0 - 14 ten times
*
*Return: 0
*
**/

void more_numbers(void)
{
	int lines;
	int num;

	for (lines = 0; lines < 10; lines++)
	{
		for (num = 0; num < 15; num++)
		{
		if (num >= 10)

		_putchar('0' + num / 10);
		_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
	}
