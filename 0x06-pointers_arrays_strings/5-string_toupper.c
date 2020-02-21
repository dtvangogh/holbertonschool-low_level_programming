#include "holberton.h"

/**
*string_toupper - swaps lowercase to uppercase
*Description - capitalizes all lower case
*Return: 0
*@s: a string
*/

char *string_toupper(char *s)
{
	int indexofs = 0;

	while (s[indexofs])
	{
		if (s[indexofs] >= 'a' && s[indexofs] <= 'z')
		{
		s[indexofs] -= 32;
		}
		++indexofs;
	}
	return (s);
}

