#include "lists.h"
#include <stdlib.h> /* For malloc and strdup */

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *dup_str;

	/* Input validation: String must not be NULL */
	if (str == NULL)
		return (NULL);

	/* 1. Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. Duplicate the string (strdup is allowed for this task) */
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		/* If duplication fails, free the allocated node memory */
		free(new_node);
		return (NULL);
	}

	/* 3. Populate the new node's fields */
	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = NULL; /* Since it's the last node, next must be NULL */

	/* 4. Handle an empty list case */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* 5. Traverse the list to find the last node */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* 6. Link the last node to the new node */
	current->next = new_node;

	/* 7. Return the address of the new element */
	return (new_node);
}
