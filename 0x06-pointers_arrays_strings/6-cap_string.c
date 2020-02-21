#include "holberton.h"

/**
*cap_string - function to capitalize
*@s: pointer parameter
*Return: Success
*/

char *cap_string(char *s)
{

int index;

char lastchar;

	for (index = 0, lastchar = '.'; s[index] != '\0'; index++)
	{
		if (
		lastchar == ',' ||
		lastchar == '.' ||
		lastchar == ';' ||
		lastchar == '!' ||
		lastchar == '?' ||
		lastchar == '"' ||
		lastchar == '(' ||
		lastchar == ')' ||
		lastchar == '}' ||
		lastchar == '{' ||
		lastchar == ' ' ||
		lastchar == 9 ||
		lastchar == 10 ||
		index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')

				s[index] -= 32;
		}

		lastchar = s[index];
	}
	return (s);
}





