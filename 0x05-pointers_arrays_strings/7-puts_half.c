#include "holberton.h"
/**
*puts_half - prints half the string
*description - only prints last half of string
*@str: a string
**/

void puts_half(char *str)
{

int a;

int stringlength = _strlen(str);

	if (stringlength % 2 == 0)
	{
		for (a = stringlength  / 2; a < stringlength; a++)
			_putchar(str[a]);
	}
	else
	{
		for (a = stringlength - (stringlength - 1) / 2; a < stringlength; a++)
			_putchar(str[a]);
	}
	_putchar('\n');
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
