#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: start of the list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy->str);
		free(copy);
	}
}
