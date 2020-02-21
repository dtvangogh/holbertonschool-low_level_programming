#include "holberton.h"
/**
*_strcmp -function that compares two strings and returns an integer
*Return: 0
*@s1: a string that will be compared with an other string
*@s2: a string that will be compared with an other string
*/

int _strcmp(char *s1, char *s2)
{
	int str = 0;


	while (s1[str] != '\0' && s2[str] != '\0' && s1[str] == s2[str])
	{
		++str;
	}

	return (s1[str] - s2[str]);
}


