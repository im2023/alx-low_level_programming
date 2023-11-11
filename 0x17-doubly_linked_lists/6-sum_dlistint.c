#include "lists.h"

/**
 * sum_dlistint - Returning the sum of data a dlistint_t linked list.
 *
 * @head: Pointing to heads of doubly linked list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{


		s += head->n;
		head = head->next;
	}

	return (s);
}
