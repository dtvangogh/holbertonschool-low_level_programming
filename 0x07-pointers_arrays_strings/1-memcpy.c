#include "holberton.h"
/**
*_memcpy- a function that copies memory area
*Description - copies n bytes from src to dest
*@n: number of bytes copied
*@dest: destination string
*@src: source string
*Return: dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}

