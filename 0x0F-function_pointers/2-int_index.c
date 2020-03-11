#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - searches for an integer inside an array
  * @array: pointer to the array
  * @size: size of the array
  * @cmp: pointer to function
  * Return: index of the first 98 found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	while (++i < size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
