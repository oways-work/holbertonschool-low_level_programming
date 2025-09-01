#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * This program uses a for loop to iterate through the characters
 * representing digits '0' through '9' and prints each one using
 * the putchar function. It then prints a newline.
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
