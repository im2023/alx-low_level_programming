#include "hash_tables.h"

/**
 * key_index - Associating the index to key
 *
 * @key: the Key indexed
 *
 * @size: Hash table size
 *
 * Return: Integer after the operations.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key) % size;
	return (x);
}
