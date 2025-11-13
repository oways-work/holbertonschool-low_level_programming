#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by an int pointer to 98.
 * @n: A pointer to an integer.
 *
 * Description: Uses the dereference operator (*) to access the value
 * at the memory address stored in 'n' and sets that value to 98.
 */
void reset_to_98(int *n)
{
	/* Dereference the pointer 'n' to access the variable it points to */
	/* and assign the value 98 to that variable. */
	*n = 98;
}
