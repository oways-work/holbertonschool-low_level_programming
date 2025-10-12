#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: A pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner from a
 * struct dog. If any element is NULL, it prints (nil) instead.
 * If the struct pointer itself is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
