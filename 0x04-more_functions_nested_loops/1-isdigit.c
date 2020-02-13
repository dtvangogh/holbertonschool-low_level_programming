#include "holberton.h"
#include <stdio.h>

/**
*int _isdigit(int c)-finds if c is a digit
*
*Return: 1 if digit and 0 if else
*
*@c:a charactr
**/

int _isdigit(int c)
{
	if (c == '0' || c >= '9')
	return (1);
	else
	return (0);
}
