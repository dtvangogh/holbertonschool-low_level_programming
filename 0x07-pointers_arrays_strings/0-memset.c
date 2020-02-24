#include "holberton.h"
/**
*_memset - a function that fills memory with a constant byte
*@n: number of bytes to be filled
*@s: pointer to the string
*@b: the byte
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
