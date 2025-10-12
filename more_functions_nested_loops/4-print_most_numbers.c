#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Nothing.
 */
void print_most_numbers
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
    if (c != '2' && c != '4')
		_putchar(c);
	}
	_putchar('\n');
}
