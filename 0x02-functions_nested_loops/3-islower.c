#include "holberton.h"

/**
 * _islower - checks for lowercase letters
 *
 * Return: Always 0.
 *
 *@c: the ascii value of a character
 **/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
