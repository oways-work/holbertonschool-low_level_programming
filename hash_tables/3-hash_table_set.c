#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 *
 * Description: In case of collision, the new node is added at the
 * beginning of the list. If the key already exists, its value is updated.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;
	char *value_copy = NULL;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Duplicate the value string */
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	/* Get the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in the list at this index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* Key found, update the value and free the old one */
			free(current_node->value);
			current_node->value = value_copy;
			return (1);
		}
		current_node = current_node->next;
	}

	/* Key not found, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	/* Duplicate the key string */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}

	new_node->value = value_copy;
	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
