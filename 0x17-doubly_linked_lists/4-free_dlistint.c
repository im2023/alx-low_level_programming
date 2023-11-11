#include "lists.h"

/**
 * free_dlistint - frees a dbly.
 *
 * @head: pointing the head of list
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *n = head->n;

		free(head);

		head = n;
	}
}
