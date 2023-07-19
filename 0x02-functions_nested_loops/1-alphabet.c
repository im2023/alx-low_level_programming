#include "main.h"

/**
 * main - entry point
 *
 * print_alphabet - prints the alphabet.
*/

print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
