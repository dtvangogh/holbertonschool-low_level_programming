#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in a double linked list
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temporary;

	temporary = head;
	sum = 0;
	while (temporary != NULL)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
