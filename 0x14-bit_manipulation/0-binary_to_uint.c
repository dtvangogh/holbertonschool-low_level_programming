#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary to decimal form
 * @b: a pointer to a binary string
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	int index, power, digit_in_string;

	index = power = number = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
		index++;

	index = index - 1;
	while (index >= 0)
	{
		digit_in_string = b[index];
		if (digit_in_string == '0')
		{
			power++;
			index--;
		}
		else if (digit_in_string == '1')
		{
			number += 1 << power;
			power++;
			index--;
		}
		else
			return (0);
	}
	return (number);
}
