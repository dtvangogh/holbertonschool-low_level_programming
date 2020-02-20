#include "holberton.h"

/**
 * print_number - A function that prints any integer up to 1,000,000,000
 * @n: integer value to print
 */
void print_number(int n)
{
	if (n < 0)   /* prints negative numbers */
	{
		n = -n;
		_putchar('-');
	}
	if (n < 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');

}
