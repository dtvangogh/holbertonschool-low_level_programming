#include "holberton.h"

#include "holberton.h"

/**
 * print_sign- prints sign of integer
 *
 * Return: Always 0.
 *
 *@n:the value of an integer
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}}
