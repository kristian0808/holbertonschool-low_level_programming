#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *hash_table_create - Func that creates a hash table
 *@size: the size of array
 *Return: Pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (!ht)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));

	if (!ht->array)
	{
		return (NULL);
	}
	return (ht);
}
