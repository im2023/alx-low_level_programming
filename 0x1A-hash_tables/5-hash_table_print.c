#include "hash_tables.h"

/**
 * hash_table_print - printing key and value in hash table
 * 
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, t = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			while (node != NULL)
			{
				if (t > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				t++;
			}
		}
	}
	printf("}\n");
}
