#include "holberton.h"
/**
*swap_int - swaps the values of two variables
*description - swaps two variables
*Return: 0
*@a: integer variable that will be swapped
*@b: integer variable that will be swapped
**/

void swap_int(int *a, int *b)
{
int temporary;

temporary = *a;
*a = *b;
*b = temporary;


}
