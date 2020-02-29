#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
*main-calculates the sum of all positive numbers
*@argc: size of argv
*@argv: arguments passed to program
*Return: 0
*/

int main(int argc, char **argv)
{
	int numbers;

	int sum;

	int i;

	if (argc == 0)
		printf("%d\n", 0);
	while (argc > 0 && argc--)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			i++;

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}

		}
		numbers = atoi(argv[argc]);
		sum = sum + numbers;
	}
	printf("%d\n", sum);
	return (0);
}
