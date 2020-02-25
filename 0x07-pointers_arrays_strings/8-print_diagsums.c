#include "holberton.h"

#include <stdio.h>


void print_diagsums(int *a, int size)
{
int i; int j; int diagonal1 = 0; int diagonal2 = 0; 

	for (i = 0; i < size * size; i += size + 1)
	diagonal1 += a[i]; 

	for (j = size - 1; j < size * size; j += (size - 1))

	diagonal2 += a[i]; 


	printf("%i, %i\n", diagonal1, diagonal2);
}