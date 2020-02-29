#include <stdlib.h>
#include <stdio.h>
/**
*main-multiplies two numbers
*@argc: size of argv
*@argv: arguments passed to program
*Return: 0
*/

int main(int argc, char **argv)
{
	int number1;

	int number2;

	int product;

	if (argc == 3)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		product = number1 * number2;

		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
