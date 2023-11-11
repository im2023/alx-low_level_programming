#include "lists.h"

/**
 * print_dlistint - prints elemts of doubly linked list.
 *
 * @h: pointing the head of the list.
 *
 * Return: sum of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
