#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type with information about a dog
 * @name: The name of the dog (type: char *)
 * @age: The age of the dog (type: float)
 * @owner: The name of the dog's owner (type: char *)
 *
 * Description: This structure stores basic details about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

