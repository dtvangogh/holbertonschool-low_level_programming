#include "3-calc.h"
/**
  * op_add - adds 2 integers
  * @a: first number to add
  * @b: second number to add
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracts two integers
  * @a: first number
  * @b: second number
  * Return: difference of the a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies two integers
  * @a: first number
  * @b: second number
  * Return: product of the integers
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divides two integers
  * @a: first number
  * @b: second number
  * Return: result of a divided by b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - divides two integers, returns the remainder
  * @a: first number
  * @b: second number
  * Return: remainder of the division
  */
int op_mod(int a, int b)
{
	return (a % b);
}
