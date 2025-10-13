#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Case 1: Deletion at index 0 (Head) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node at 'index' */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	/* Case 2: Index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Case 3: Deletion in the middle or at the end */
	/* Link previous node to next node */
	if (current->prev != NULL)
		current->prev->next = current->next;

	/* Link next node to previous node */
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
