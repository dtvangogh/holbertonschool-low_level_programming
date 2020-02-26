#include "holberton.h"
/**
*_strlen_recursion-returns string length of a string
*@s: string that will be used
*Return: 0
*
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

