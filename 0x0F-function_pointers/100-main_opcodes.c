#include <stdio.h>
#include <stdlib.h>

/**
 * hexastring - show out
 * @start: start of out
 * @n: number of bytes
 */


void hexastring(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", start[i]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * main - print out number of bytes of main function
 * @argc: int of arguments
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int numberofbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numberofbytes = atoi(argv[1]);
	if (numberofbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	hexastring((char *)&main, numberofbytes);
	return (0);
}
