#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
*add_node - adds new node at the beginning
*@str: the string added
@head: the first string in list
*Return: new list
*/
list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	char *dup = strdup(str);
	list_t *temp;

	while (*dup[counter] != '\0')
		++counter;
	temp = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->len = counter;
	temp->str = dup;
	temp->next = *head;
	*head = temp;
	return (temp);
}
