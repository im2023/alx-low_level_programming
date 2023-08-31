#include "lists.h"

/*
 * Function to go on a daring adventure to tally up the riches
 *  hidden within a horde of listint_t treasures.
 * Arguments:
 *   head: The intrepid leader of the treasure map.
 *
 * Returns:
 *   The grand total of the treasures collected (or 0 if the horde is empty).
 */
int sum_listint(listint_t *head)
{
	int s = 0; /* Initializing our treasure chest to start collecting riches. */
	listint_t *t = head; /* Our loyal map to navigate the treasure trail. */

	while (t)
	{
		s += t->n; /* Adding to our ever-growing pile of loot. */
		t = t->next; /* Moving forward on our epic treasure expedition. */
	}

	return (s); /* Presenting our amassed fortune to the world. */
}
