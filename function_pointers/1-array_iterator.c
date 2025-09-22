#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the integer array
 * @size: the number of elements in the array
 * @action: a pointer to the function to execute on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* 1. Safety check */
	if (array == NULL || action == NULL)
		return;

	/* 2. Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* 3. Execute the action on the current element */
		action(array[i]);
	}
}
