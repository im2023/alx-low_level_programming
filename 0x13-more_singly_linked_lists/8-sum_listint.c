#include "lists.h"

/**
 * sum_listint - Calculating the sum of all data in listint_t list
 *
 * @head: is first node
 *
 * Return: result of s.
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	listint_t *t = head;

	while (t)
	{
		s += t->n;

		t = t->next;
	}

	return (s);
}
