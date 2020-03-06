#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - alloates memory using malloc
 * @b:how many  bits to allocate
 * Return: pointer to  memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
