#include <stdlib.h>
#include <stdio.h>
/**
*main-prints name of program
*@argc: size of argv
*@argv: arguments passed
*Return: 0
*/

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
