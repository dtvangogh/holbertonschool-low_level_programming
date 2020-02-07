#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Main function
*
*Return: 0 on Success
*/

int main(void)
{
int number;
for (number = '0'; number <= '9'; ++number)
putchar(number);
putchar('\n');
return (0);
}