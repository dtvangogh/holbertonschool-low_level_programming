#include "holberton.h"
#include <stdio.h>

/**
*squarerootcheck-checks if a number has a square root
*@n: number to check
*@squareroot:number that loops through to find square root of n
*Return: square root or -1 if no square root
*/

int squarerootcheck(int n, int squareroot)
{
	if (n - squareroot * squareroot == 0)
		return (squareroot);
	else if (squareroot * squareroot < n)
		return (squarerootcheck(n, squareroot + 1));
	else
		return (-1);
}
/**
*_sqrt_recursion - returns the square root
*Description - returns square root of a number
*@n: the number that will be checked
*Return: square root or -1 if no square root
*/
int _sqrt_recursion(int n)
{
	return (squarerootcheck(n, 1));
}
