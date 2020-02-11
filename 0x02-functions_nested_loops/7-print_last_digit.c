#include "holberton.h"


/**
 * print_last_digit - print the last digit of a number
 *
 * Return: last digit of r 
 *
 *@r: a number
 */
int print_last_digit(int r)
{
        int digit; 
        digit = r % 10;
        if ( digit < 0)
                digit = r % 10 * -1;
                _putchar('0' + digit);
        return (digit);   
        
        }