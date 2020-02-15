#include "holberton.h"

/**
 * print_number - A function that prints an integer
 * @n: integer value to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n < 100 && n > 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n < 1000 && n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n < 10000 && n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100 % 10) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n == 0)
		_putchar(n + '0');
}
