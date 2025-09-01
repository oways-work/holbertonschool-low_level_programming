#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10.
 *
 * This program uses a for loop with an integer variable
 * to iterate through numbers 0 to 9. The integer is
 * converted to its character representation by adding it
 * to the ASCII value of '0' before being passed to putchar.
 * No variables of type char are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
