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
	unsigned long int index;
	hash_node_t *new_hash_node;
	hash_node_t *temporary;

	if (ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temporary = ht->array[index];

	while (temporary != NULL)
	{
		if (strcmp(temporary->key, key) == 0)
		{
			free(temporary->value);
			temporary->value = strdup(value);
			return (1);
		}
		temporary = temporary->next;
	}

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	if (ht->array[index] != NULL)
		new_hash_node->next = ht->array[index];
	else
		new_hash_node->next = NULL;

	ht->array[index] = new_hash_node;
	return (1);
}
