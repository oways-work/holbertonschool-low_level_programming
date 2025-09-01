#include <stdio.h>

/**
 * main - Prints the lowercase alphabet, followed by a new line.
 *
 * This program uses a for loop to iterate through the lowercase
 * alphabet and prints each character using the putchar function.
 * It strictly adheres to the Betty coding and documentation style.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
