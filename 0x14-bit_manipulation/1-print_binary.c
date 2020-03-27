#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * print_binary - converts decimal to binaryy...recursively
 * @n:decimal number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = n >> 1, find_biggest = 1, biggest = 1;

	while (number != 0)
	{
		find_biggest = find_biggest << 1;
		number = number >> 1;
	}
	biggest = find_biggest;
	while (biggest != 0)
	{
		_putchar('0' + ((n & biggest) == biggest));
		biggest = (biggest >> 1);
	}
}
