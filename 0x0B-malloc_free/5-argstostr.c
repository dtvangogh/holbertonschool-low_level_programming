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
	int sizedst, aindex, sindex, dstindex;
	char *dst;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (sizedst = 0, aindex = 0; aindex < ac; aindex++)
		for (sindex = 0; av[aindex][sindex] != '\0'; sindex++)
			sizedst++;

	dst = malloc(sizedst + ac + 1);
	if (dst == NULL)
		return (NULL);

	for (aindex = 0, dstindex = 0; aindex < ac; aindex++)
	{
		for (sindex = 0; av[aindex][sindex] != '\0'; sindex++)
		{
			dst[dstindex] = av[aindex][sindex];
			dstindex++;
		}
		dst[dstindex] = '\n';
		dstindex++;
	}
	dst[dstindex] = '\0';  /**add null bye**/
	return (dst);
}
