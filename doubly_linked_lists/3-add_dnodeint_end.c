#include "lists.h"
#include <stdlib.h> /* For malloc */

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @n: The integer data (n) for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	/* 1. Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* 2. Set the data and end-of-list pointers for the new node */
	new->n = n;
	new->next = NULL;

	/* 3. Handle the case where the list is empty */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* 4. Traverse to the last node (temp will point to the last node) */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* 5. Link the last node (temp) to the new node */
	temp->next = new;
	new->prev = temp;

	return (new);
}
