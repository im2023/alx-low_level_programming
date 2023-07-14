#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * description: Positive anything is better than negative nothing
 *
 * Return: 0 (secces)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);

	return (0);
}
