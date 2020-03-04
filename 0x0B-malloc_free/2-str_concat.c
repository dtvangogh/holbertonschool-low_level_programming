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
	int i, lens1 = 0, lens2 = 0;
	char *thearray;

	if (s1 != NULL)
	{
		while (s1[lens1] != 0)
			lens1++;
	}
	if (s2 != NULL)
	{
	while (s2[lens2] != 0)
		lens2++;
	}

	thearray = malloc((lens1 + lens2) * sizeof(char) + 1);

	if (thearray == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		thearray[i] = s1[i];
	for (i = 0; i < lens2; i++)
		thearray[i + lens1] = s2[i];
	thearray[lens1 + lens2] = 0;

	return (thearray);
}