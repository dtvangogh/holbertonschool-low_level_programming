#include "holberton.h"
/**
*_strlen - finds the length of a string
*description - returns length of string
*Return: string length
*@s: a string
**/
int _strlen(char *s)
{

	int stringlength;

	for (stringlength = 0; s[stringlength] != '\0'; ++stringlength)
	{}
	return (stringlength);
}
