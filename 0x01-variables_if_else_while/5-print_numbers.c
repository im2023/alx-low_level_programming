#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: Writing a program that prints
 * all single digit numbers of base 10 .
 *
 * Return: 0 (secces)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
