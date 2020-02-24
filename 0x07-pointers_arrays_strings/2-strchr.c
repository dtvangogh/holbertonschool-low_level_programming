#include "holberton.h"
#include <stdio.h>

/**
*_strchr - locates a character in a string
*@s: the string
*@c: the character the function will look for.
*Return: 0
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
		return (NULL);


}
