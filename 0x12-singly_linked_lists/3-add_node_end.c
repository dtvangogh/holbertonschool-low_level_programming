#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Add a node to the end of a list
 * @head: Head of list
 * @str: String to print
 * Return: pointer new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp, *tail;
	char *copy = strdup(str);

	if (str = NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len])
		++len;
	temp->str = copy;
	temp->len = len;
	temp->next = NULL;
	tail = *head;

	if (!*head)
	{
		*head = temp;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (temp);
}
