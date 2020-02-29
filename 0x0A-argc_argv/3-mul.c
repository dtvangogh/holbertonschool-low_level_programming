#include <stdlib.h>
#include <stdio.h>
/**
*main-multiplies two numbers
*@argc: size of argv
*@argv: arguments passed to program
*Return: 0
*/

int main(int argc, char **argv[])
{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	int product = number1 * number2;

	if (argc == 3)
		printf("%d\n", product);

	else
	{
		printf("Error\n");
	}
	return (0);
}
