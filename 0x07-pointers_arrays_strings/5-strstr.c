#include "holberton.h"

/**
*_strstr - finds the first needle of a haystack
*Description - Returns the pointer to the beginning of substring
*@haystack:string we are looking in
*@needle:string we are looking for
*Return: a pointer beginning at substring; 0 if no substring
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j = 0;


	for (i = 0; haystack[i] != 0;)
	{
		for (j = 0; needle[j] != 0;)
		{
			if (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			else
				break;
		}
		if (needle[j] == 0)
			return (&haystack[i - j]);
		i = i - j;
		j = 0;

		i++;
	}
	if (needle[0] == 0)
		return (haystack);
	return (0);
}
