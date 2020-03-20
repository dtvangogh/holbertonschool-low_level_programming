#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
**add_node- adds new node at the beginning
*Description- adding new node shifts everything down
*@str: the string added
@head: the first string in list
*Return: new list
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *copy = strdup(str);
	list_t *new;

	len = 0;
	while (str[len] != '\0')
		++len;
	new = *head;
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
