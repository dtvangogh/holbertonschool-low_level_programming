#include "holberton.h"
/**
* leet - funtion to change certain letters to certain numbers
* description - swaps letters for numbers
* @s: string given by function
* Return: the string
*/
char *leet(char *s)
{
	char let[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char swap[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int count;
	int index;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (index = 0; let[index]; index++)
		{
			if (let[index] == s[count])
				s[count] = swap[index];
		}
	}
	return (s);
}

