#include <stdlib.h>
#include <stdio.h>
/**
*main - prints all arguments received
*@argc: size of argv
*@argv: arguments passed to program
*Return: 0
*/

int main(int argc, char **argv)
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
