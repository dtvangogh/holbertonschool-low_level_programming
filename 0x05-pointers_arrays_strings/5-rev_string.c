#include "holberton.h"
/**
*rev_string - reverses any string
*description - reverse
*Return: 0
*@s: any given string
**/

void rev_string(char *s)
{
	int i;
	int j = 0;
	char temp[10];
	int stringlength = _strlen(s);

	for (i = stringlength - 1; i >= 0; i--)
	{
		temp[stringlength - i - 1] = s[i];
	}
	for (i = 0; i < stringlength; i++)
		s[i] = temp[i];

}

/**
*_strlen - finds the length of a string
*description - returns length of string
*Return: string length
*@s: a string
**/

int _strlen(char *s)
{

	int stringlength;

	stringlength = 0;

	for (stringlength = 0; s[stringlength] != '\0'; ++stringlength)
	{}
	return (stringlength);

}


