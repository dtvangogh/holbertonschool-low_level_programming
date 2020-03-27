#include "holberton.h"

/**
 * get_bit - returns the value of  binary number  at certain index
 * @n: number
 * @index: index
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int checker;

	if (index >= 64)
		return (-1);
	checker = 1 << index;
	if ((n & checker) == 0)
		return (0);
	else
	{
		return (1);
	}
}
