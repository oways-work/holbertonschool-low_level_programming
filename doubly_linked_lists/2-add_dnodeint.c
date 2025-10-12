#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @n: The integer data (n) for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* 1. Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* 2. Set the data for the new node */
	new->n = n;

	/* 3. Set the 'prev' pointer to NULL, as it is the new head */
	new->prev = NULL;

	/* 4. Link the new node to the current head */
	new->next = *head;

	/* 5. If the list was not empty, update the old head's 'prev' pointer */
	if (*head != NULL)
		(*head)->prev = new;

	/* 6. Update the head pointer to the new node */
	*head = new;

	/* 7. Return the address of the new node */
	return (new);
}
