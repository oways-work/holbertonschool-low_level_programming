#include "main.h"

/**
 * main - Prints the string "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
