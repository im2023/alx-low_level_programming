#include "lists.h"

/**
 * add_nodeint - Performs a daring heist to add a new node
 * @head: Pointer to the big boss of the gang (first node).
 * @n: The undercover data that the new recruit will carry.
 *
 * Return: A pointer to the new node, or NULL if the mission fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;  /* The new recruit, ready for action! */

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		/* The mission went south, call for backup! */
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	/* Mission accomplished, the new recruit is now part of the gang! */
	return (new);
}
