#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Pointer to a the hash table
 * @key: Key to search for
 * Return: Value associated with the element else NULL in fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht || !key || !*key)
		return (NULL);

	i = key_index((const unsigned char *) key, ht->size);
	current = ht->array[i];

	while (current)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
