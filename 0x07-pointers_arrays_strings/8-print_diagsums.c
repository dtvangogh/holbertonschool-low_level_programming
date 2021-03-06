#include "holberton.h"

#include <stdio.h>
/**
*print_diagsums - prints the sum of two diagonals of a square matrix
*description - takes a square matrix of integers and prints sum
*@size: the size of the square matrix
*@a: pointer to a square array of integers
*/

void print_diagsums(int *a, int size)
{
int i;
int j;
int diagonal1 = 0;
int diagonal2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	diagonal1 += a[i];

	for (j = size - 1; j < size * size - 1; j += (size - 1))


	diagonal2 += a[j];

	printf("%i, %i\n", diagonal1, diagonal2);
}
