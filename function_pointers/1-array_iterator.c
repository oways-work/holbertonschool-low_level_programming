#include "funtion_pointers"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the integer array
 * @size: the number of elements in the array
 * @action: a pointer to the function to execute on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *aray, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		return;
	
	for (i = 0; i < size;i++)
	{
		action(array[i];

	}
}
