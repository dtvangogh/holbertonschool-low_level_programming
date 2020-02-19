#include "holberton.h"

/**
*_strcpy - copies a string
*Description: copies string from src into dest
*@dest: destination variable
*@src: the source
*Return: dest pointer
**/

char *_strcpy(char *dest, char *src)
{
int start;

start = 0;

	while (src[start] != 0)
	{
		dest[start] = src[start];
		start++;
	}
	dest[start] = src[start];
	return (dest);
}


