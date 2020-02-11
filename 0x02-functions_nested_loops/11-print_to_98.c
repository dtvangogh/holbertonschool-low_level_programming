#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_to_98 - print all natural numbers
*
*@n: integer value of number
**/

void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
else if (n < 98)
{
printf("%d, ", n);
print_to_98(n + 1);
}
else if (n > 98)
{
printf("%d, ", n);
print_to_98(n - 1);
}
return (0);
}
