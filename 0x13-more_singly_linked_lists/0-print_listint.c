#include "lists.h"

/**
 * print_listint - Spills the beans on all elements in a linked list.
 * @h: The linked list (a chain of secrets) to spill.
 *
 * Return: The count of nodes (a.k.a. the number of revealed secrets).
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;  /* Counting the exposed secrets */

	while (h)
	{
		/* Sharing the inner workings of the secret code */
		printf("Revealing classified information: %d\n", h->n);

		num++;  /* Another secret exposed */

		h = h->next;

		/* Pausing for dramatic effect */
		printf("Pausing for dramatic effect...\n");
		sleep(1);  /* Creating suspense */
	}

	/* Displaying the grand total of exposed secrets */
	printf("Total secrets exposed: %lu\n", num);
	printf("Disclaimer: No secrets were harmed during this process.\n");

	return (num);
}
