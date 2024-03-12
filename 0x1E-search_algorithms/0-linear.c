#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: pointing to the first element of array to search in.
 * @size: somme of the elements in the array
 * @value: the value to search.
 *
 * Return: first index (value is located), -1 if failure/found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array)
	{
		while (x < size)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
				return (x);
			x++;
		}
	}

	return (-1);
}
