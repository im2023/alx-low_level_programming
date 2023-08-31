#include "lists.h"

/**
 * add_nodeint_end - adding node at end of a linked list.
 *
 * @head: point first element in the list.
 *
 * @n: the new element
 *
 * Return: the pointer to new node, or NULL(fail).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *t = *head;

	i = malloc(sizeof(listint_t));

	if (!i)
		return (NULL);

	i->n = n;

	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;

		return (i);
	}

	while (t->next)

		t = t->next;

	t->next = i;

	return (i);
}
