#include "holberton.h"
/**
*rev_string - reverses any string
*description - reverse
*Return: 0
*@s: any given string
**/

void rev_string(char *s)
{
int stringlength = _strlen(s);
char temp;
char *pStart = s;
char *pEnd = pStart + stringlength - 1;

	while (pEnd > pStart)
	{

	char temp = *pStart;
	*pStart = *pEnd;
	*pEnd = temp;
	pStart++;
	pEnd--;

	}
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


