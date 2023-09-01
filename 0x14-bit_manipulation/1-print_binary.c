#include "main.h"

/**
 * print_binary - printing binary representation as decimal number.
 *
 * @n:number to be printed.
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;

	unsigned long int p;

	for (i = 63; i >= 0; i--)
	{
		p = n >> i;

		if (p & 1)
		{
			_putchar(49);

			j++;
		}
		else if (j)
			_putchar(48);
	}
	if (!j)
		_putchar(48);
}
