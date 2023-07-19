#include "main.h"

/**
 *print_last_digit - print last_digit for any intiger n
 *
 *@n: intiger number
 *
 *@lastDigit: value of the last digit
 *
 *Return: the value of last_digit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
