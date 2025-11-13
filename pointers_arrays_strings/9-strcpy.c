#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer where the string is to be copied.
 * @src: The source string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop through the source string until the null terminator */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the null terminator */
	dest[i] = '\0';

	/* Return the pointer to the destination */
	return (dest);
}
