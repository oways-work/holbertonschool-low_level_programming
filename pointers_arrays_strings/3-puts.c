#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Description: Iterates through the string and prints each character
 * using the custom _putchar function until the null terminator is reached.
 * It then prints a newline character.
 */
void _puts(char *str)
{
	int i = 0;

	/* Loop through the string until the null terminator ('\0') is found */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	/* Print a newline character */
	_putchar('\n');
}
