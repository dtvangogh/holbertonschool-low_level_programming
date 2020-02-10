#include "holberton.h"
/**
*main - print alphabet in lowercase 10 times
*
*Return: 0 on Success
**/

void print_alphabet_x10(void)
{
int num;
int lower;
for (num=0; num < 10; num ++)
{
for (lower = 'a'; lower <= 'z'; ++lower)
{
_putchar(lower);
}
_putchar ('\n');
}}