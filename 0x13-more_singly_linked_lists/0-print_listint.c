#include "lists.h"

/**
 * print_listint - Puts on a show featuring elements of a linked list.
 * @h: The cast of characters (linked list) to dazzle the audience.
 *
 * Return: The number of actors on stage (number of node)
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;  /* Keeping track of the superstar count */

	while (h)
	{
		/* Presenting the next superstar in the lineup */
		printf("And now, direct from the list stage, give it up for: %d!\n", h->n);

		num++;  /* Another standing ovation for a successful performance */

		h = h->next;

		/* Time for a dramatic pause before the next act */
		printf("Ladies and gentlemen, hold your applause...\n");
		sleep(1);  /* Adding suspense for effect */
	}

	/* Applauding the collective talent on display */
	printf("Total superstars showcased: %lu\n", num);
	printf("Disclaimer: No egos were inflated during this show.\n");

	return (num);
}
