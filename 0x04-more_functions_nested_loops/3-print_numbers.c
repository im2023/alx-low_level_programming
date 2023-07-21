#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * print_numbers - function that prints n from 0 to 9
 *
 * num: declaration of the variable for print_numbers
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
