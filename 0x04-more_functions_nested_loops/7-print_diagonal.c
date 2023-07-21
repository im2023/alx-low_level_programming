#include "main.h"

/**
 * print_diagonal - prints 10 times the alphabet
 *
 *@n: is the numer of time the character \ is
 *    should be print
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			-putchar('\n');
		}
	}
}
