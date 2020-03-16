#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stdarg.h>

/**
 * sum_them_all - adds up all the arguments
 * @n: number of args
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
