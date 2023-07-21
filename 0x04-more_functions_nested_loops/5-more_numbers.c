#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 - 14, followed by a new line
 *
 * Return: Always 0 (succes)
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 0; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count >= 10)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}