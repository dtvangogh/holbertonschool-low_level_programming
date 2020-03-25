#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the linked list
 * @head:  the list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
