#include "lists.h"

/**
 * dlistint_len - returns the number of elements.
 *
 * @h: pointing to head of list.
 *
 * Return: cnt of the elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
