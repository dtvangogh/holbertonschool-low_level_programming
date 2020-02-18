#include "holberton.h"
/**
*_puts - print a string
*description - takes a string and prints it
*Return: 0
*@str: a given string
**/
void _puts(char *str)
{
	int a;

	while (str[a] != '\0')
	_putchar(str[a++]);

	_putchar('\n');
}
