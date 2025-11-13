#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int head;
	char temp;

	/* Calculate length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from the start and end, moving inwards */
	for (head = 0; head < length / 2; head++)
	{
		temp = s[head];
		s[head] = s[length - 1 - head];
		s[length - 1 - head] = temp;
	}
}
