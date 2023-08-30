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
	listint_t *jdid;

	jdid = malloc(sizeof(listint_t));
	if (!jdid)
	}
		return (NULL);
	}

	jdid->n = n;
	jdid->next = *head;
	*head = jdid;

	return (jdid);
}
