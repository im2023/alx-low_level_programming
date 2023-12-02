#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - Deleting hash table
 *
 * @ht: the Hash table
 *
 * Return: retuning Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *current;

	while (x < ht->size)
	{
		while (ht->array[x] != NULL)
		{
			current = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = current;
		}
		x++;
	}
	free(ht->array);
	free(ht);
}
