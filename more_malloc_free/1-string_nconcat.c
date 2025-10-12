#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to use from s2.
 *
 * Description: This function allocates new memory to hold the contents of s1,
 * followed by the first n bytes of s2, and a null terminator. If n is
 * greater than or equal to the length of s2, the entire string s2 is used.
 * NULL strings are treated as empty strings.
 *
 * Return: A pointer to the newly allocated concatenated string.
 * Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate the length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* If n is greater or equal to len2, use all of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the new string */
	concat_str = malloc(sizeof(char) * (len1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into the new string */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy the first n bytes of s2 into the new string */
	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	/* Add the null terminator */
	concat_str[i + j] = '\0';

	return (concat_str);
}
