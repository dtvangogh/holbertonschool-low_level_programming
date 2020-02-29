#include <stdlib.h>
#include <stdio.h>
/**
*main- prints number of arguments passed
*@argc: size of argv
*@argv: arguments passed to program
*Return: 0
*/

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
