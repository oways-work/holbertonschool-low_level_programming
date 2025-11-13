#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Description: Iterates through the string character by character
 * until the null terminator ('\0') is reached.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++; /* Move the pointer to the next character */
	}

	return (count);
}
