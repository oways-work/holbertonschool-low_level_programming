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
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	/* Check for valid input string */
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
	new_node->len = _strlen(dup_str); /* Use custom strlen */

	/* 4. Link the new node: Its 'next' points to the current head */
	new_node->next = *head;

	/* 5. Update the head pointer to point to the new node */
	*head = new_node;

	/* 6. Return the address of the new element */
	return (new_node);
}
