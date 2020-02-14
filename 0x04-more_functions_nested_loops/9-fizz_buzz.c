#include "holberton.h"
#include <stdio.h>

/**
*main-prints numbers 1 - 100
*
*Description - main prints 1-100 but multiples of 3 and 5 are changed
*
*return:0
*
**/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (num % 5 == 0)
		{
			printf("buzz");
		}
		else if (num % 3 == 0)
		{
			printf("fizz");
		}
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
