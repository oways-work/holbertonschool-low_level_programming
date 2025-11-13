#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* 1. Calculate length */
	while (str[len] != '\0')
	{
		len++;
	}

	/* 2. Determine the starting point (n) */
	if (len % 2 == 0)
	{
		/* Even length: start at len / 2 */
		n = len / 2;
	}
	else
	{
		/* Odd length: start at (len - 1) / 2 + 1 */
		n = (len - 1) / 2 + 1;
	}

	/* 3. Print from index n to the end */
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
