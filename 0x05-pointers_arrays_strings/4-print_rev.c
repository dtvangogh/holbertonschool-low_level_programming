#include "holberton.h"
/**
*print_rev - print a string in reverse
*description - reverses a string
*Return: 0
*@s: a variable to represent a string
**/

void print_rev(char *s)
{

	int a;

	while (s[a] != '\0')
	a++;
	a--;
	for (; a >= 0; a--)
		_putchar(s[a]);
		_putchar('\n');
}
