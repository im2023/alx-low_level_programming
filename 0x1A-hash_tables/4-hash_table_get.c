#include "hash_tables.h"

/**
 * hash_table_get - Geting hash table value
 *
 * @ht: the hash table
 *
 * @key: the Key
 *
 * Return: value ,if not NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *t;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	t = ht->array[x];
	if (t == NULL)
		return (NULL);
	while (strcmp(t->key, key) && t != NULL)
	{
		t = t->next;
	}
	if (t == NULL)
		return (NULL);
	else
		return (t->value);
}
