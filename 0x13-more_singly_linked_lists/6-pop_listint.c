#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - eletes the head node
 * @head: head node
 * Return: the value of old head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int oldhead;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	oldhead = temp->n;
	return (oldhead);
}
