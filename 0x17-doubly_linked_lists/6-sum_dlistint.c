#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of data.
 *
 * @head: pointer pointing the head of linked list.
 *
 * Return: returning s the sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		s += head->n;

		head = head->next;
	}
	return (s);
}
