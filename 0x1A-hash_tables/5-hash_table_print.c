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
	int first = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 1;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
