#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 *print_numbers - function that prints n from 0 to 9
 *
 *@n:declaration of the variable for print_numbers
*/

void print_numbers(int n)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
