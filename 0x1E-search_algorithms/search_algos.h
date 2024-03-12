#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* MANDATORY */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* ADVANCED */
int jump_search(int *array, size_t size, int value);


/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: The Index of the node.
 * @next: the pointer to next node.
 *
 * Description: singly linked list node structure
 * for the Holberton project.
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * struct skiplist_s - Singly linked list with express lane.
 *
 * @n: Integer
 * @index: Index of node in list
 * @next: Pointer to next node
 * @express: Pointer to next node in express lane
 *
 * Description: singly linked list node structure with an express lane
 * for the Holberton project.
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
