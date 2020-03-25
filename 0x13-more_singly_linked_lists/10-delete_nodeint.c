#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the index
 * @head: linked list
 * @index: position of object in list
 * Return: 1 sucess, -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted_node;
	unsigned int i = 0;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (head == NULL)
				return (-1);
			i++;
		}
	if (*head == NULL)
		return (0);
	deleted_node = temp->next;
	temp->next = deleted_node->next;
	free(deleted_node);
	}
	return (1);
}
