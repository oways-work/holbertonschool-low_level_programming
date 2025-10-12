#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and handles failure.
 * @b: The number of bytes to allocate.
 *
 * Description: This function attempts to allocate 'b' bytes of memory.
 * If malloc fails, it terminates the process with a status value of 98.
 *
 * Return: A pointer to the newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
