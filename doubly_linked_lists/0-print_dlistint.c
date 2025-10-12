#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes (size_t).
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Traverse the list from the head to the end */
	while (h != NULL)
	{
		/* Print the integer stored in the current node */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		count++;
	}

	return (count);
}
