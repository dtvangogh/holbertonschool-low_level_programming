#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	pointer[i] = 0;
	return (pointer);
}
