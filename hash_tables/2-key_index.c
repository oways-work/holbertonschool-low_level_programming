#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in the hash table array.
 * @key: The key string to find the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 *
 * Description: This function uses the hash_djb2 function to generate
 * a hash value, and then uses the modulo operator (%) to map that
 * hash value to an index within the bounds of the hash table's array size.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Get the hash value from the djb2 function */
	hash_value = hash_djb2(key);

	/* Use modulo to get an index within the array size */
	return (hash_value % size);
}
