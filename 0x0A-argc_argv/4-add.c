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
	int sum;

	int i;

	if (argc == 0)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		i = 0;
		while (i != '\0')
		{
			i++;
		}
		if (!(isdigit(argv[argc][i])))
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
