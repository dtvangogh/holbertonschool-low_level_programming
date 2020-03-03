
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

	unsigned int size;
	unsigned int sizeofnewstring;

	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++
	stringcopy = malloc(sizeof(char) * size);
	if (stringcopy == NULL)
		return (NULL);
	sizeofnewstring = 0;
	while (sizeofnewstring < size)
	{
		stringcopy[sizeofnewstring] = str[sizeofnewstring];
		sizeofnewstring++;
	}
	return (stringcopy);
}

