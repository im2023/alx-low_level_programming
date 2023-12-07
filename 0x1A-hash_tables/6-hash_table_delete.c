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
	hash_node_t *temp, *next;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}

	free(ht->array);
	free(ht);
}
