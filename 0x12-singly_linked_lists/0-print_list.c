#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h == NULL)
		return (0);
	if (h->str != NULL)
		printf("[%i] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	return (1 +  print_list(h->next));
}