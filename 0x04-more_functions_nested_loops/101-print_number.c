#include "holberton.h"

/**
 * print_number - A function that prints any integer up to 1,000,000,000
 * @n: integer value to print
 */
void print_number(int n)
{
	if (n < 0)   /* prints negative numbers */
	{
		if (n == -2147483648)
		{
		_putchar(n / 100000000 + '0');
		_putchar(n / 10000000 % 10 + '0');
		_putchar(n / 1000000 % 10 + '0');
		_putchar(n / 100000 % 10 + '0');
		_putchar(n / 10000 % 10 + '0');
		_putchar(n / 1000 % 10 + '0');
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		}
		n = -n;
		_putchar('-');
	}
	if (n / 10 && n < 1000000000)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
