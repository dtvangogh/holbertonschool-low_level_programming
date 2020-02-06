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
int alpha;
for (alpha = 'a'; alpha <= 'z'; ++alpha)
putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; ++alpha)
putchar(alpha);
putchar('\n');
return (0);
}
