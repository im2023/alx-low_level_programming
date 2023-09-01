#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1.
 *
 * @n: pointing changed number.
 *
 * @index: the index to bit 1.
 *
 * Return: 1 if success or -1 if is a failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
