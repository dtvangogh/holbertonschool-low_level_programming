#include "lists.h"

/**
 * dlistint_len - returns the number of elements of doubly linked  list
 * @h: head
 * Return: number of elemnts
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
