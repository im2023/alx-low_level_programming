#include "main.h"

/**
 *print_last_digit - prints 10 times the alphabet
 *
 *@n: intiger number
 *
 *@last_digit: value of the last digit
 *
 *Return: the value of last_digit
*/

int print_last_digit(int n, last_digit)
{
	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
