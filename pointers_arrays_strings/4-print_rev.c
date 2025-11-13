#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate length */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Iterate backwards from the last character (len - 1) */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
