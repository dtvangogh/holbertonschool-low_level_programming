#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: the hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			printf("'%s': '%s',", node->key, node->value);
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
