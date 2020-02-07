#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Main function
*
*Return: 0 on Success
**/
int main(void)
{
int hun;
int ten;
int one;
for (hun = 0; hun <= 7; hun++)
{
for (ten = hun + 1; ten <= 8; ten++)
{
for (one = ten + 1; one <= 9; one++)
{
putchar(hun + '0');
putchar(ten + '0');
putchar(one + '0');
if (hun < 7 || ten < 8 || one < 9)
{
putchar(',');
putchar(' ');
}}}}
putchar('\n');
return (0);
}
