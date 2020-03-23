#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: head of the linked list
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h !=  NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
