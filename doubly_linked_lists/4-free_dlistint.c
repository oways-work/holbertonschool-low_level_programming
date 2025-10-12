#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: Traverses the doubly linked list and frees each node,
 * including the data structure itself.
 * The 'prev' pointer makes no difference here, as we only traverse
 * using the 'next' pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next; /* Save the next address before freeing current */
		free(current);
		current = next_node;
	}
}
