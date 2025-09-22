#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the integer array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 *
 * Return: The index of the first element for which cmp does not return 0.
 * If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* 1. Handle edge cases and invalid input */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* 2. Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* 3. Check for a match using the cmp function */
		if (cmp(array[i]) != 0)
		{
			/* 4. Return the index of the first match */
			return (i);
		}
	}

	/* 5. Return -1 if no match was found */
	return (-1);
}
