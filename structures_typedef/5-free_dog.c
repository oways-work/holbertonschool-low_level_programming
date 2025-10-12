#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: A pointer to the dog_t struct to be freed.
 *
 * Description: This function deallocates the memory for a dog structure,
 * including the memory allocated for the name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
