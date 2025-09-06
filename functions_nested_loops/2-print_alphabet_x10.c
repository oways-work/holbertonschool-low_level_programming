#include "main.h"

/**
 * main - print_alphabet - Prints the lowercase alphabet.
 *
 * This function prints the lowercase alphabet from 'a' to 'z'
 * followed by a new line.
 * 10x times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	count++;
	}
}
