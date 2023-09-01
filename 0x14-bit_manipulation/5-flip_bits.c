#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             in order to convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 63, s = 0;
	unsigned long int t;
	unsigned long int excl = n ^ m;

	for (; x >= 0; x--)
	{
		t = excl >> x;

		if (t & 1)
			s++;
	}

	return (s);
}
