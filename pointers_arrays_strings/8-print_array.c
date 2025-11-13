#include "main.h"

/**
 * print_num - Recursively prints an integer using _putchar.
 * @n: The integer to print.
 *
 * Description: Handles positive, negative, and zero values
 * without using standard library functions.
 */
void print_num(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		/* Use a long int to safely negate the absolute minimum value */
		if (n == -2147483648)
		{
			/* Special handling for minimum int value (-2147483648) */
			print_num(214748364);
			_putchar('8');
			return;
		}
		n = -n;
	}

	/* Recursive call to print the next digit */
	if (n / 10)
	{
		print_num(n / 10);
	}

	/* Print the current last digit */
	_putchar((n % 10) + '0');
}

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to print.
 *
 * Description: Elements are separated by a comma and a space.
 * No comma and space are printed after the last element.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_num(a[i]);

		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
