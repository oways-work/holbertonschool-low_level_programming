#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to be added to the end of the first.
 *
 * Description: This function takes two strings, s1 and s2, and returns a
 * pointer to a newly allocated space in memory containing s1 followed by s2,
 * and a null terminator. If either string is NULL, it is treated as an
 * empty string.
 *
 * Return: A pointer to the concatenated string on success.
 * NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, len1, len2;

	/* Treat NULL inputs as empty strings for safe processing */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of the first string */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/* Calculate the length of the second string */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the new string */
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if malloc was successful */
	if (concat_str == NULL)
		return (NULL);

	/* Copy the first string into the new memory block */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy the second string, appending it to the first */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	/* Add the null terminator at the end */
	concat_str[i + j] = '\0';

	return (concat_str);
}
