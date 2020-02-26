#include "holberton.h"
/**
*_pow_recursion-finds the value of x to the power of y
*@x: base number
*@y: exponent
*Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
