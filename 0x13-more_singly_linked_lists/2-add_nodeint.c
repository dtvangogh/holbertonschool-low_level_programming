#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint-add new node to beginning of list
 *@head: pointer to the  linked list
 *@n: data in the node
 * Return: number of elements in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	if (newnode == NULL)
		return (NULL);
	return (newnode);
}
