#include "holberton.h"
#include <unistd.h>
#include <studio.h>
/**
*main - print alphabet in lowercase
*
*Return: 0 on Success
**/

void print_alphabet(void)
{
int lower;
for (lower = 'a'; lower <= 'z'; ++lower)
_putchar(lower);
_putchar ('\n');
}
