#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - turns each argument into a string and display in separate line
 * Description: Concatenates all  arguments into one string
 * @ac: number of arguments
 * @av: string
 * Return:  concatenated string
 */

char *argstostr(int ac, char **av)
{
	int sizedest, aindex, sindex;
	char *dst;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (sizedest = 0, aindex = 0; aindex < ac; aindex++)
		for (sindex = 0; av[aindex][sindex] != '\0'; sindex++) /**loop through sindex to find total size for dst string**/
			sizedest++;

	dst = malloc(sizedest + ac + 1);
	if (dst == NULL)
		return (NULL);

	for (aindex = 0, sizedest = 0; aindex < ac; aindex++) 
	{
		for (sindex = 0; av[aindex][sindex] != '\0'; sindex++)
		{
			dst[sizedest] = av[aindex][sindex]; /** put all arguments into dst string**/
			sizedest++; /**increment each time a character is found**/
		}
		dst[sizedest] = '\n'; /**add a new line for each word, put in ac loop**/
		sizedest++;
	}
	dst[sizedest] = '\0';  /**add null bye**/
	return (dst);
}
