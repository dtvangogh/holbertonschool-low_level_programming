#include "hash_tables.h"
/**
 *hash_table_get - gets value of a key
 *@ht: the hash
 *@key: the key
 *
 *Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_of_key;
	hash_node_t *hash_node;
	if (ht == NULL)
		return NULL;
	index_of_key = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[index_of_key];
	if (hash_node == NULL)
		return (NULL);
	/*Check if there is a linked list entry*/
	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
