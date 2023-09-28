#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 for big endian, 1 for the smalls .
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *p = (char *) &x;

	return (*p);
}
