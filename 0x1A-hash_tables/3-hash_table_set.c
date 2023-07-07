#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key to add
 * @value: The value associated with the key
 * Return: 1 if succeeses else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int i;

	if (!ht || !key || !*key)
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	current = ht->array[i];

	while (current)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}

	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
