#include <stdio.h>

/**
 * main - Prints the lowercase alphabet and then the uppercase alphabet.
 *
 * This program iterates through the lowercase characters 'a' to 'z'
 * and prints each one using putchar. It then does the same for the
 * uppercase characters 'A' to 'Z', and finally prints a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
