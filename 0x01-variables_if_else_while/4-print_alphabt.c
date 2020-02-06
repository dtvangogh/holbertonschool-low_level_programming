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
int lower;
for (lower = 'a'; lower <= 'z'; ++lower)
{
if (lower != 'q' && lower != 'e')
putchar(lower);
}
putchar('\n');
return (0);
}
