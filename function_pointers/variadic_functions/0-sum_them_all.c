#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to sum.
 * @...: The variable number of integer parameters to sum.
 *
 * Return: The sum of all parameters. If n == 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* Handle the edge case where no numbers are passed */
	if (n == 0)
		return (0);

	/* 1. Initialize the argument list */
	va_start(args, n);

	/* 2. Access each argument in the list */
	for (i = 0; i < n; i++)
	{
		/* Add the current argument to the sum */
		sum += va_arg(args, int);
	}

	/* 3. Clean up the argument list */
	va_end(args);

	return (sum);
}
