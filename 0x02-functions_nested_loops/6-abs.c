#include "holberton.h"

#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * Return: Always 0.
 *
 *@n: the value of an integer
 */

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
