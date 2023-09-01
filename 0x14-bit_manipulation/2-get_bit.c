#include "main.h"

/**
 * get_bit - returning value of a bit.
 *
 * @n: number to index.
 *
 * @index: index for the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)

		return (-1);

	num = (n >> index) & 1;

	return (num);
}
