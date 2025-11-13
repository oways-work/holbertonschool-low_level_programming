#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be processed.
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	/* 1. Calculate the length of the string to set a safe boundary */
	while (str[length] != '\0')
	{
		length++;
	}

	/* 2. Iterate and print every other character, ensuring i stays < length */
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
