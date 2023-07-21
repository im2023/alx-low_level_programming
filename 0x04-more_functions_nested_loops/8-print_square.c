#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: is the size of square
 *
*/

void print_square(int size)
{
	int row, colum;

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
