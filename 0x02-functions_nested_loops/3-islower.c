#include "main.h"

/**
 * _islower - Writing a function that checks
 *     for lowercase character
 *
 * @c: check input of fonction
 *
 * Return: Returns 1 if c is lowercase Returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
