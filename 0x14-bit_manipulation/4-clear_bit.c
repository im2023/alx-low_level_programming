#include "main.h"

/**
 * clear_bit - This function clears the bit at the given index.
 *
 * @index: bit to clear.
 *
 * @n: pointing number to change.
 *
 * Return: 1 success or -1 failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)

		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
