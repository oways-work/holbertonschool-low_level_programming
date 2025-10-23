#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and all its elements.
 * @ht: The hash table to delete.
 *
 * Description: Frees all memory associated with the hash table,
 * including all nodes, keys, and values.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node = NULL;
	hash_node_t *next_node = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	/* 1. Iterate through each bucket in the array */
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];

		/* 2. Traverse and free the linked list in this bucket */
		while (current_node != NULL)
		{
			/* Store the next pointer *before* freeing the current node */
			next_node = current_node->next;

			/* Free the memory for the duplicated key and value */
			free(current_node->key);
			free(current_node->value);
			/* Free the node itself */
			free(current_node);

			/* Move to the next node in the list */
			current_node = next_node;
		}
	}

	/* 3. Free the array of pointers */
	free(ht->array);

	/* 4. Free the hash table structure itself */
	free(ht);
}
