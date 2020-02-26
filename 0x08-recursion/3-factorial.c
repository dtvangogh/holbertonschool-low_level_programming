#include "holberton.h"
/**
*factorial-prints the factorial of a number
*@n: will find the factorial of n
*Return: 0
*
*/
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (0);
}
