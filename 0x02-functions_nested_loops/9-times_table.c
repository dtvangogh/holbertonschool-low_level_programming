#include "holberton.h"
/**
*times_table- prints the times table up to 9
*
*Return:0
*/
void times_table(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
		{
		for (x = 0; x <= 9; x++)
			{
			if (y * x >= 8)
			{
				_putchar('0' + (x * y) / 10);
				_putchar('0' + (x * y) % 10);
			}
			else
			{
			    _putchar(' ');
				_putchar('0' + y * x);
			}
			if (x < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			}
		_putchar('\n');
		}}
