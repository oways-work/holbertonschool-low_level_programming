#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head (first node) of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	/* Iterate through the list until the current node is NULL */
	while (h != NULL)
	{
		count++;
		/* Move to the next node */
		h = h->next;
	}

	return (count);
}
