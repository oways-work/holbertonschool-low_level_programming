#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: A temporary variable is used to hold the value of the
 * variable pointed to by 'a' while the swap operation occurs.
 */
void swap_int(int *a, int *b)
{
	int temp;

	/* 1. Store the value of *a (value of the variable pointed to by a) */
	temp = *a;

	/* 2. Assign the value of *b to the variable pointed to by a */
	*a = *b;

	/* 3. Assign the original value of *a (stored in temp) to the */
	/* variable pointed to by b */
	*b = temp;
}
