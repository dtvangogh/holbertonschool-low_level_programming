#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n: bytes of string  2 to concatenate
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int lengths1, lengths2, i;

	if (s1 != NULL)
		for (lengths1 = 0; s1[lengths1] != 0; lengths1++)
		{}
	if (s2 != NULL)
		for (lengths2 = 0; s2[lengths2] != 0; lengths2++)
		{}
	if (n > lengths2)
		lengths2 = n;
	pointer = malloc(sizeof(char) * (lengths1 + n) + 1);
		if (pointer == NULL)
		return (NULL);

		i = 0;
	while (i < lengths1)
	{
		pointer[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pointer[i + lengths1] = s2[i];
		i++;
	}
	pointer[i + lengths1] = '\0';

	return (pointer);

}
