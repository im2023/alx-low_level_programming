#include "lists.h"

/**
 * print_dlistint - prints elemts of a doubly linked list.
 * 
 * @h: pointing the head of the list.
 *
 * Return: i sommes of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
        h = h->next;
		i++;
	}
	return (i);
}
