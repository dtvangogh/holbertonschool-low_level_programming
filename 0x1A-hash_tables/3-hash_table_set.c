#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table
 *@key: the key
 *@value: the value inside ke
 *
 *Return: 1 if successful, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* calculate the index */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	/* Adds the key and value to the index*/
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
