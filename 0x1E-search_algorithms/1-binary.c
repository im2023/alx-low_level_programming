#include "search_algos.h"

/**
 * print_array - printing array of integers, separated with ",".
 *
 * @array: pointing array to print
 * @first: first index to print.
 * @last: last index to print.
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searching value in array of integers.
 *
 * @array: points the first element of array to search in.
 * @size: number of elements in array.
 * @value: value searched for.
 *
 * Return: index where value is located, else -1 failure/found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2;

			if (value > array[i])
				first = i + 1;
			else if (value < array[i])
				last = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
