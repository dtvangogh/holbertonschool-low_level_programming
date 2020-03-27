#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - changes the bit at the index to 1
 * @n: pointer to the number
 * @index: where to put the 1
 * Return: 1 sucess -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converter;

	while (index < 64)
	{
		converter = 1 << index;
		*n = *n | converter;
		return (1);
	}
	return (-1);
}
