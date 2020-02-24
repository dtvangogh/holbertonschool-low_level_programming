#include "holberton.h"

/**
* print_chessboard - prints a chessboard with first letter of pieces
*@a: array used to make the board
*Return: 0
*
*/


void print_chessboard(char (*a)[8])
{

	int i;

	int j;

	i = 0;

	j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

