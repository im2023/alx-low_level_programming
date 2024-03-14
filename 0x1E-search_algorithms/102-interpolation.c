#include "search_algos.h"

/**
 * interpolation_search - searching for value in array of integers.
 *
 * @array: pointer to first element of array to search in.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: first located value, else -1 failure/not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x = 0, lower = 0, higher = size - 1;

	if (array)
	{
		while ((value >= array[lower]))
		{
			x = lower + (((double)(higher - lower) /
						(array[higher] - array[lower])) * (value - array[lower]));

			if (x > size)
			{
				printf("Value checked array[%lu] is out of range\n", x);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", x, array[x]);

			if (array[x] < value)
				lower = x + 1;
			else if (array[x] > value)
				higher = x - 1;
			else
				return (x);
		}
	}

	return (-1);
}
