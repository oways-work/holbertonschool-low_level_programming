#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The starting integer value (included).
 * @max: The ending integer value (included).
 *
 * Description: This function allocates memory for an array containing all
 * integers from min to max, inclusive, and in that order.
 *
 * Return: A pointer to the newly created array.
 * If min > max or if malloc fails, it returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the number of elements */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * size);

	/* Check if malloc failed */
	if (arr == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
