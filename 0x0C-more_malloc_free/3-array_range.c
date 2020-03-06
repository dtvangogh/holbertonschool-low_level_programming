#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create anarray of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pointer;
	int  i;
	int difference;

	difference = max - min;

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * (difference + 1));
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i <= difference; i++)
	{
		pointer[i] = i;
	}
	return (pointer);
}
