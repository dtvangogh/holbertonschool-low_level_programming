#include "holberton.h"

/**
*puts2 - prints every other character of the string
*description - prints every other character
*Return: string length
*@str: inputted string
**/
void puts2(char *str)
{
int a;
int stringlength = _strlen(str);

	for (int a = 0; a < stringlength(str); a += 2)
	
	_putchar(str[a]);
	_putchar('\n');
	
}
/**
*_strlen - finds the length of a string
*description - returns length of string
*Return: string length
*@s: a string
**/

void _strlen(char *s)
{

	int stringlength;

	stringlength = 0;

	for (stringlength = 0; s[stringlength] != '\0'; ++stringlength)
	{}


	return (stringlength);

}
