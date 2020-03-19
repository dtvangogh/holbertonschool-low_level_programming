#include "lists.h"
/**
 * list_len - returns how many  elements in a linked list
 * @h: head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}