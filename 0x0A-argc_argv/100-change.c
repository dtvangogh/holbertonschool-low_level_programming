#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins needed for: cents
 * @argc: size of argv
 * @argv: arguments passed
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int cents;

	int numberofcoins;

	numberofcoins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
		numberofcoins += cents / 25;
		cents -= (numberofcoins * 25);

		numberofcoins += cents / 10;
		cents = cents % 10;

		numberofcoins += cents / 5;
		cents = cents % 5;

		numberofcoins += cents / 2;
		cents = cents % 2;

		numberofcoins += cents;

	printf("%d\n", numberofcoins);
	return (0);
}
