#include <stdio.h>

void turtle_hare(void) __attribute__ ((constructor));

/**
 *turtle_hare - prints a msg before the main
 */

void turtle_hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
