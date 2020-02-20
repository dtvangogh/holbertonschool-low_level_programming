#include "holberton.h"
/**
*_strncat - Take 2 strings and concatenatest them
*@n: parameter of src file
*@dest: destination variable
*@src: Source variable
*Return: pointer to resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /** destination length **/
	int j = 0; /** length of src string**/

	for (i = 0; dest[i] != '\0'; ++i)
	{}
	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];

	}
	dest[i] = '\0';
		return (dest);
}
