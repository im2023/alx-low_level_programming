#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * _isdigit - check for digit
 *
 * @c: input
 *
 * Return: 0 (secces)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
