#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: char c
 * Return: c
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
		array = malloc(sizeof(c) * size);
	if (array == NULL)
		return (NULL);

	else
		return (NULL);
i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
