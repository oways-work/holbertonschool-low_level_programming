#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet, followed by a new line.
 *
 * This function iterates through all lowercase letters from 'a' to 'z'
 * and prints each one using the _putchar function. It then prints a
 * newline character at the end.
 */
void print_alphabet(void)
{
    char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
