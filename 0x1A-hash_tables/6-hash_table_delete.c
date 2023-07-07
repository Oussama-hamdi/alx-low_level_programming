#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
