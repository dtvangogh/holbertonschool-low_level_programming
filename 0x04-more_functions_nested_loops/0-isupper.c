#include "holberton.h"
#include <stdio.h> 

/** 
*_isupper-looks for uppercase letters
*
*Return: 1 if uppercase and 0 if else
*
*@c:a character
**/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return(1);
	else
	return (0);
}