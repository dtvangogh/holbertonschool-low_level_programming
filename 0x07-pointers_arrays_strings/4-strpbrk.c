#include "holberton.h"
#include <stdio.h>

/**
*_strpbrk - function that locates first occurence in string s of any
*char in string accept
*@s: a string
*@accept: a string that will be compared with s
*Return: a pointer that starts where s matches one of the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{

	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;

}

	return (0);
}
