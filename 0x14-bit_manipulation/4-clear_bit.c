#include "holberton.h"

/**
 * clear_bit - picks the index of binary and changes 1 to a 0
 * @n: number
 * @index: position to change
 * Return: 1 sucess, -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converter;

	while (index < 64)
	{
		converter = 1 << index;
		converter = ~converter;
		*n = *n & converter;
		return (1);
	}
	return (-1);
}
