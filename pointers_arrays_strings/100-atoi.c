#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 * Description: Handles signs, numerical conversion, and stops at the
 * first non-digit character after a number has started.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	int result = 0;
	int limit = -214748364;

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

			if (result < limit)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}

			result *= 10;
			if (sign == 1)
			{
				if (result < -2147483647 + (s[i] - '0'))
					return (2147483647);
				result -= (s[i] - '0');
			}
			else
			{
				if (result < -2147483648 + (s[i] - '0'))
					return (-2147483648);
				result -= (s[i] - '0');
			}
		}
		else if (started == 1)
		{
			break;
		}
		i++;
	}

	if (sign == 1)
		return (-result);

	return (result);
}
