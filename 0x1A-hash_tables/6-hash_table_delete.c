#include "hash_tables.h"

/**
 * hash_table_delete - Deleting hash table
 *
 * @ht: the Hash table.
 *
 * Return: (Void).
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *t;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			while (ht->array[n] != NULL)
			{
				t = ht->array[n]->next;
				free(ht->array[n]->key);
				free(ht->array[n]->value);
				free(ht->array[n]);
				ht->array[n] = t;
			}
		}
	}
	free(ht->array);
	free(ht);
}
