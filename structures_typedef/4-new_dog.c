#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog_t struct, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_len = 0, owner_len = 0, i;

	while (name && name[name_len])
		name_len++;
	while (owner && owner[owner_len])
		owner_len++;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog_ptr->name[i] = name[i];
	new_dog_ptr->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		new_dog_ptr->owner[i] = owner[i];
	new_dog_ptr->owner[i] = '\0';

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
