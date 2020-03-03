#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to copy
 * Return: pointer to copy of the string
 */

char *_strdup(char *str)
{
	char *stringcopy;

	unsigned int sizeofstring;
	unsigned int sizeofnewstring;

	sizeofstring = 0;
	if (str == NULL)
		return (NULL);
	while (str[sizeofstring] != '\0')
		sizeofstring++;

		stringcopy = malloc(sizeof(char) * sizeofstring);
	if (stringcopy == NULL)
		return (NULL);
	sizeofnewstring = 0;
	while (sizeofnewstring < sizeofstring)
	{
		stringcopy[sizeofnewstring] = str[sizeofnewstring];
		sizeofnewstring++;
	}
	return (stringcopy);
}

