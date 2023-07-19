#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character
 *
 *@c : take input from other fonction
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
