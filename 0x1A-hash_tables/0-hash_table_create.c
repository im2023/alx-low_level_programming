#include "hash_tables.h"

/**
 * hash_table_create - Creatnge hash table
 *
 * @size: Table size
 *
 * Return: The hash table(hash_tbl)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hash_tbl;

	if (size == 0)
		return (NULL);
	hash_tbl = malloc(sizeof(hash_table_t));
	if (hash_tbl == NULL)
		return (NULL);
	hash_tbl->size = size;
	hash_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tbl->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		hash_tbl->array[x] = NULL;
	}
	return (hash_tbl);
}
