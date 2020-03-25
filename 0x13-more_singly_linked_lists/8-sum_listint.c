#include "lists.h"

/**
 * sum_listint - returns the sum of all nodes
 * @head: head of linked list
 * Return: the sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
