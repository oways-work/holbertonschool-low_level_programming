#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash value.
 *
 * Description: This function uses the djb2 algorithm, which starts with
 * an initial hash value of 5381 and iteratively updates it for each
 * character in the string using the formula: hash = (hash * 33) + c.
 * The `(hash << 5) + hash` is a fast way to compute `hash * 33`.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
