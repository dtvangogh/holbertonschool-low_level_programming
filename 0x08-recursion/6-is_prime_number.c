#include "holberton.h"
/**
*primechecker - tests if a number is prime
*Return: 1 if prime, 0 if not
*@n:a number
*@counter: a number that will test if n is prime
*/
int primechecker(int n, int counter)
{
	if (n <= 1)
		return (0);
	if (counter * counter == n)
		return (0);
	if (counter * counter > n)
		return (1);
	else
		return (primechecker(n, counter + 1));
}
/**
*is_prime_number - checks for prime numbers
*Return: 1 if prime, 0 if not
*@n:an integer to check
*/
int is_prime_number(int n)
{
	return (primechecker(n, 1));
}
