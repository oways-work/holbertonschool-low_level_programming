#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node = NULL;

	/* 1. Validate inputs */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || *key == '\0')
		return (NULL);

	/* 2. Get the index for the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* 3. Traverse the linked list at the calculated index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* 4. Compare the key */
		if (strcmp(current_node->key, key) == 0)
		{
			/* 5. Key found, return the associated value */
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	/* 6. Key not found in the list */
	return (NULL);
}
