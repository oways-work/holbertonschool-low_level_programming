#include "hash_tables.h"

/**
 * update_value - (Helper) Tries to find and update an existing key.
 * @list_head: Pointer to the head of the linked list at the index.
 * @key: The key to find.
 * @value_copy: The new (already duplicated) value to set.
 *
 * Return: 1 if key was found and updated, 0 otherwise.
 */
static int update_value(hash_node_t *list_head, const char *key, char *value_copy)
{
	hash_node_t *current = list_head;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Free the old value */
			current->value = value_copy; /* Set the new one */
			return (1);
		}
		current = current->next;
	}
	return (0);
}

/**
 * add_node_to_list - (Helper) Creates and adds a new node to the list.
 * @head_ptr: Double pointer to the head of the list (to modify it).
 * @key: The key to add (will be duplicated).
 * @value_copy: The value to add (already duplicated, will be "owned" by node).
 *
 * Return: 1 on success, 0 on failure.
 */
static int add_node_to_list(hash_node_t **head_ptr,
							const char *key, char *value_copy)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* Malloc failure */

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0); /* strdup failure */
	}

	new_node->value = value_copy;
	new_node->next = *head_ptr; /* Link to the front */
	*head_ptr = new_node;       /* Update the head */

	return (1);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (will be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL;
	hash_node_t *list_head = NULL;

	/* 1. Validate inputs */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* 2. Duplicate the value string */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	/* 3. Get the index */
	index = key_index((const unsigned char *)key, ht->size);
	list_head = ht->array[index];

	/* 4. Try to update an existing key */
	if (update_value(list_head, key, value_copy) == 1)
	{
		return (1); /* Success, value was updated, value_copy is now used */
	}

	/* 5. Key not found, add a new node */
	if (add_node_to_list(&(ht->array[index]), key, value_copy) == 1)
	{
		return (1); /* Success, new node added */
	}

	/* 6. Failure during new node creation */
	free(value_copy);
	return (0);
}

