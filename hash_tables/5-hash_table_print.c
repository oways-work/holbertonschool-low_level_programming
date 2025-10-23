#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value pairs in the order they appear
 * in the array and linked lists of the hash table.
 * If ht is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node = NULL;
	char first_pair_printed = 0; /* Flag to handle commas */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	/* Iterate through each index of the array */
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		/* Traverse the linked list at this index */
		while (current_node != NULL)
		{
			/* If this is not the very first pair, print a comma separator */
			if (first_pair_printed == 1)
				printf(", ");

			printf("'%s': '%s'", current_node->key, current_node->value);
			first_pair_printed = 1; /* Set flag to true after printing one */
			current_node = current_node->next;
		}
	}

	printf("}\n");
}
