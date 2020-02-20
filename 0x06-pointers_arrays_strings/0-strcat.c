#include "holberton.h"
/**
*_strcat - Take 2 strings and concatenatest them
*@dest: destination variable
*@src: Source variable
*Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0; /** destination length **/
	int j = 0; /** length of src string**/

	for (i = 0; dest[i] != '\0'; ++i)
	{}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];

	}
	dest[i] = '\0';
		return (dest);
}


