#include "holberton.h"
/**
*_strspn - write function that gets length of prefix substring
*@s: string
*@accept: substring
*Return: number of bytes of s that contains only bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int hello = 0;

unsigned int oleh;

	while (s[hello] != '\0')
	{
		oleh = 0;
		while (accept[oleh] != '\0' && s[hello] != accept[oleh])
			oleh++;
		if (accept[oleh] == '\0')
		return (hello);
		hello++;
	}

	return (hello);
}


