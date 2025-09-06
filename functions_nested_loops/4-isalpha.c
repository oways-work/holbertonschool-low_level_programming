#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * This function takes an integer 'c' which represents a character
 * from the ASCII table. It uses a conditional statement to determine
 * if the character's ASCII value falls within the range of lowercase or uppercase
 * letters ('a' to 'z') or ('A' to 'Z')
 *
 * Return: 1 if the character is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
