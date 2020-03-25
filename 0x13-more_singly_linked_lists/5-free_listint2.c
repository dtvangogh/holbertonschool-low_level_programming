#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the linked list
 * @head: the pointer to linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	while (head != NULL)
	{
		temp == head;
		head = head->next;
		free(temp);
	}
}
