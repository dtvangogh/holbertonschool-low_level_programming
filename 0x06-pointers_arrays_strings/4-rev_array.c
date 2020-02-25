#include "holberton.h"

/**
*reverse_array - reverse an array filled with integers
*@a: the array
*@n: number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int temporary;



	i = 0;
	n -= 1
	while (i <= n)
	{
		temp = a[i]
		a[i] = a[n];
		a[n] = temp;
		i++; n--; 
	}
}