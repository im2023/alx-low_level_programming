#include "lists.h"

/**
 * delete_nodeint_at_index - delet node in a linked list
 *
 * @head: pointer to the first element in the list
 *
 * @index: index node to delete.
 *
 * Return: 1 if Success, -1 if Fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *t = *head

	listint_t *c = NULL;

	if (*head == NULL)

		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);

		return (1);
	}

	while (x < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		x++;
	}


	c = t->next;
	t->next = c->next;
	free(c);

	return (1);
}
