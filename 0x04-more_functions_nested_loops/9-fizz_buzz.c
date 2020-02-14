#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main-fizz buzz translation
*
*Description - main prints 1-100 but multiples of 3 and 5 are changed
*
*Return: always 0 (success)
**/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
