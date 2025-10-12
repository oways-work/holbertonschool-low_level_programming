#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function traverses the list, freeing the
 * memory allocated for the string in each node and then the node itself.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	/* Iterate through the entire list */
	while (current != NULL)
	{
		/* 1. Store the pointer to the next node before freeing the current node */
		next_node = current->next;

		/* 2. Free the duplicated string (str) within the current node */
		if (current->str != NULL)
			free(current->str);

		/* 3. Free the current node itself */
		free(current);

		/* 4. Move to the next node */
		current = next_node;
	}
}
