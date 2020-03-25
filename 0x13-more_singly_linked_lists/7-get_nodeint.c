#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - get node at index function
 * @head: head of linkedlist
 * @index: index to get
 * Return: the nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
