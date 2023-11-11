#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a list.
 *
 * @head: pointing to thehead of lists.
 *
 * @index: node starts from 0.
 *
 * Return: returns head.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;


	if (!head)
		return (NULL);


	while (head != NULL)
	{

		if (x == index)
			break;
		x++;

		head = head->next;
	}

	return (head);
}
