#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times,
 * followed by a new line.
 *
 * This function uses nested loops to achieve the desired output.
 * The outer loop iterates 10 times, representing each line.
 * The inner loop iterates through the ASCII values for lowercase
 * letters, from 'a' to 'z', and prints each character.
 * A newline character is printed after each full alphabet line.
 *
 * It adheres to the constraint of using _putchar a maximum of two times
 * by placing the first call to _putchar inside the inner loop for the
 * letters, and the second call to _putchar after the inner loop for the
 * newline character.
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
