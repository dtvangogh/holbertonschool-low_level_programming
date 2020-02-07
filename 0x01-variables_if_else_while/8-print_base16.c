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
int hex;
for (hex = '0'; hex <= '9'; ++hex)
putchar(hex);
for (hex = 'a'; hex <= 'f'; ++hex)
putchar(hex);
putchar('\n');
return (0);
}
