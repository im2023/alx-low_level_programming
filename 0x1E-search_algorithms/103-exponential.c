#include "search_algos.h"

/**
 * print_array - printing array of integers, separated with commas
 *
 * @array: pointer to array printed.
 * @first: first index printed.
 * @last: last index printed.
 */

void print_array(int *array, size_t t_first, size_t t_last)
{
	size_t x;

	printf("Searching in array: ");
	for (x = t_first; x <= t_last; x++)
	{
		if (x != t_first)
			printf(", ");
		printf("%d", array[x]);
	}
	printf("\n");
}

/**
 * ex_binary_search - searching value in array of integers.
 *
 * @array: points to first element of array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * @start: first index for looking inside.
 *
 * Return: index where the value located, else -1 (failure/not found).
 */

int ex_binary_search(int *array, size_t size, int value, size_t start)
{
	size_t x = 0, t_first = start, t_last = size - 1;

	if (array)
	{
		while (t_first <= t_last)
		{
			print_array(array, t_first, t_last);
			x = (t_first + t_last) / 2;

			if (value > array[x])
				t_first = x + 1;
			else if (value < array[x])
				t_last = x - 1;
			else
				return (x);
		}
	}

	return (-1);
}

/**
 * exponential_search - searching for value in array of integers.
 *
 * @array: points to first element of array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: index where the value located, else -1 (failure/not found).
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t x = 1;

	if (array)
	{
		while (x < size && array[x] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			x *= 2;
		}

		x = x > size - 1 ? size : x + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", x / 2, x - 1);
		return (ex_binary_search(array, x, value, x / 2));
	}

	return (-1);
}
