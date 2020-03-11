#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - Main
  * @argc: count of arguments
  * @argv: pointer to array
  * Return: 0 on success, 98 on incorrect arguments, 99 if no argv[2][0]
  */
int main(int argc, char *argv[])
{
	int a, b, i;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (i >= 1)
			printf("Error\n"), exit(99);	
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	    && argv[2][0] != '/'  && argv[2][0] != '%' && argv[2][0] != 'x') || get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(a, b)));
	return (0);
}
