#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
*add_node - add a new node at the beginning
*Description - adding new node shifts everything down
*@str: the string added
@head: the first string in list
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *copy;
	list_t *new;

	len = strlen(str);
	new = *head;
	copy = malloc(sizeof(char) * len + 1);
	if (head == NULL || str == NULL || copy == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->len = len; /*iterate thru length first */
	new->str = copy;
	new->next = *head;
	*head = new;
	return (new);
}
