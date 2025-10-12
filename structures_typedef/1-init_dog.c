#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to set for the dog.
 * @age: The age to set for the dog.
 * @owner: The owner's name to set for the dog.
 *
 * Description: This function takes a pointer to a dog structure and assigns
 * the provided name, age, and owner to its elements. If the pointer is NULL,
 * the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
