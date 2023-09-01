#include "main.h"

/**
 * binary_to_uint - converting binary number.
 *
 * @b: (string) contain the binary number:  
 *
 * Return: the unsigned converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int n;

	unsigned int number = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < 48 || b[n] > 57)
			return (0);
		number = 2 * number + (b[n] - 48);
	}

	return (number);
}
