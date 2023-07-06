#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table data structure
 * @size: Size of the array
 * Return: A pointer to the new hash table or NULL in fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	for (i = 0; i < size; ++i)
		ht->array[i] = NULL;

	return (ht);
}
