#include "main.h"

/**
 * print_line - prints 10 times the alphabet
 *
 * @n: is the number of time the _ character
 *     should be print
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
