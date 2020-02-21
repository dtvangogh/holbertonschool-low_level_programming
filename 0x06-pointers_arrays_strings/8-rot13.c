#include "holberton.h"

/**
 * rot13 - take a string and put a rot encryption on it
 * Description: creates an encryption
 * @s: String example
 * Return: string with the rot 13 encryption
 */

char *rot13(char *s)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int strindex;
	int index;

	for (strindex = 0; s[strindex] != '\0'; strindex++)
	{
		for (index = 0; index < 52; index++)
		{
			if (s[strindex] == alphabet[index])
			{
				s[strindex] = rot13[index];
				break;
			}
		}
	}
	return (s);
}
