#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of a string
 * @str: The string to be duplicated.
 *
 * Description: This function allocates new memory for a string and copies the
 * content of the input string `str` into it. The memory for the new string
 * can be freed with `free()`.
 *
 * Return: On success, a pointer to the duplicated string.
 * Returns NULL if `str` is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	/* Check if the input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the new string (+1 for the null terminator) */
	dup_str = malloc(sizeof(char) * (len + 1));

	/* Check if malloc was successful */
	if (dup_str == NULL)
		return (NULL);

	/* Copy the characters from the original string to the new string */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	/* Add the null terminator to the end of the new string */
	dup_str[len] = '\0';

	return (dup_str);
}
