#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * _isupper - check if c upper
 *
 * @c: input of alphabet
 *
 *Return: 1 if uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
