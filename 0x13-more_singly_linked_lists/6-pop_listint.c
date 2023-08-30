#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements deleted,or 0 .
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;

	x = (*head)->next;

	free(*head);

	*head = x;

	return (y);
}
