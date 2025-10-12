#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Description: This function allocates a block of memory for an array of
 * 'nmemb' elements, each 'size' bytes long. The memory is then set to zero.
 *
 * Return: A pointer to the allocated and zeroed memory.
 * If nmemb or size is 0, or if malloc fails, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *char_ptr;
	unsigned int i, total_size;

	/* Check for zero inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	/* Allocate memory */
	ptr = malloc(total_size);

	/* Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* Zero out the allocated memory */
	char_ptr = ptr;
	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
