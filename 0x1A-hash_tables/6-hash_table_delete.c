#include "hash_tables.h"

/**
 * hash_table_delete - deleting a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *node;

	while (i < ht->size)
	{
		while (ht->array[n] != NULL)
		{
			node = ht->array[n]->next;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = node;
		}
		n++;
	}
	free(ht->array);
	free(ht);
}
