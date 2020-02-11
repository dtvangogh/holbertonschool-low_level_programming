#include "holberton.h"

/**
 * _isalpha - checks for lowercase and uppercase letters
 *
 * Return: Always 0.
 *
 *@c: the ascii value of a character
 **/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
