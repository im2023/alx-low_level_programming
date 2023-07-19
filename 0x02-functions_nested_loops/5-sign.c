#include "main.h"

/**
 * print_sign - prints 10 times the alphabet
 *
 * @n: take imput from fonction
 *
 * Return: 1 if +, -1 if -1 and 0 if 0
*/

int print_sign(int n)
{
	int n;

	if (n > 0)
		_putchar('+');
		return (1);
	else if (n < 0)
		_putchar('-');
		return (-1);
	else if (n == 0)
		_putchar('0');
		return (0);
}
