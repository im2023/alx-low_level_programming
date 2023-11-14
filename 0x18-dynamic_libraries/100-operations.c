#include <stdio.h>
#include <stdlib.h>

/**
 * add - Adding two integers
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: Sum of integers.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Subtracting one integer from another
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: Result of subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Multipling two integers
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: Product integers.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Divides one integer by another
 *
 * @a: Numerator
 *
 * @b: Denominator
 *
 * Return: Result of division (a/b).if not 0.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - Computes the modulo of one integer by another.
 *
 * @a: Dividend
 *
 * @b: Divisor
 *
 * Return: Result of modulo operation (a % b)
 *         If divisor is zero return 0 .
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
