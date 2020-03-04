#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: the pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	int length1, length2, i;

	length1 = 0;

	length2 = 0;

	if (s1 != NULL)
		while (s1[length1] != 0)
		{
			length1++;
		}
	if (s2 != NULL)
		while (s2[length2] != 0)
		{
			length2++;
		}
	concat = malloc((length1 + length2) * sizeof(char) + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	for (i = 0; i < length2; i++)
		concat[i + length1] = s2[i];
		concat[length1 + length2] = 0;
	return (concat);
}
