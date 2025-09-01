#include <stdio.h>

/**
 * main - Prints the lowercase alphabet, except for 'q' and 'e'.
 *
 * This program uses a for loop to iterate through the characters
 * from 'a' to 'z'. It checks each character and prints it only
 * if it is not 'q' or 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
