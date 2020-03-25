#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: linked list
 * @index: position of new node
 * @n: data inside node
 * Return: the pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newnode, *temp;
	unsigned int count = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (index == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
