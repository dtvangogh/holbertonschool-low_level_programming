#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
  * main - Main
  * @argc: count of arguments
  * @argv: pointer to array
  * Return: 0 on success, 98 on incorrect arguments, 99 if no argv[2][0]
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		printf("Error\n"), exit(99);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(a, b)));
	return (0);
}
