#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *@ht: hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporary;
	unsigned long int i = 0;

	if (ht == NULL)
		return (NULL);

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			temporary = ht->array[i];
			free(temporary->key);
			free(temporary->value);
			ht->array[i] = ht->array[i]->next;
			free(temporary);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
