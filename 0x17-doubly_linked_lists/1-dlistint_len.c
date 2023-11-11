#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 *
 * @h: pointing to head of list.
 *
 * Return: sum of the elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0


	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}
