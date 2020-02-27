#include "holberton.h"

/**
*_strlen_recursion-returns string length of a string
*@s: string that will be used
*Return: 0
*
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
		return (0);
}

/**
*palindromechecker - checks if string is a palindrome
*@s: string to test
*@strlen: length of s
*Return: 1 if palindrome, 0 if not
*/
int palindromechecker(char *s, int strlen)
{
	if (strlen <= 1)
		return (1);
	else if (*s == *(s + strlen - 1))
		return (palindromechecker(s + 1, strlen - 2));
	else
		return (0);
}

/**
* is_palindrome-returns 1 if string is palindrome, 0 if not
*@s: string to test
*Return: 0
*
*/

int is_palindrome(char *s)
{
	int strlen;

	strlen = _strlen_recursion(s);
	return (palindromechecker(s, strlen));
}
