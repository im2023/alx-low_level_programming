#include "hash_tables.h"

/**
 * hash_table_delete - Deleting hash table
 * 
 * @ht: the Hash table
 *
 * Return: retuning Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *new_hash;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x] != NULL)
			{
				new_hash = ht->array[x]->next;
				free(ht->array[x]->key);
				free(ht->array[x]->value);
				free(ht->array[x]);
				ht->array[x] = new_hash;
			}
		}
	}
	free(ht->array);
	free(ht);
}
