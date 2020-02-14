#include "holberton.h"
#include <stdio.h>

/**
*_isdigit(int c)-finds if c is a digit
*
*Description: sees if numbers are digits
*
*Return: 1 if digit and 0 if else
*
*@c:a character
**/

int _isdigit(int c)
{
	if (c <= '0' || c <= '9')
		return (1);
	else
		return (0);
}
