#include "holberton.h"
#include <stdio.h>
/**
*print_array - prints an array
*description - prints the output of a given array
*@a: elements of the array
*@n: number of elements of the array that will be printed
*/

void print_array(int *a, int n)
{
int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", a[start]);
		if (start < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
