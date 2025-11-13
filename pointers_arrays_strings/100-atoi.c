#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 * Description: Handles multiple signs and ignores leading non-digit
 * characters until the first number or sign. Stops reading at the
 * first non-digit character after the number has started.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* 1 for positive, -1 for negative */
	int started = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (started == 0)
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			/* Calculate the next part of the result */
			result = result * 10 + (s[i] - '0');
		}
		else if (started == 1)
		{
			/* Stop processing once a number sequence is complete */
			break;
		}
		i++;
	}

	return (result * sign);
}
