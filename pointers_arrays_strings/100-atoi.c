#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 * Description: Correctly handles signs, ignores leading non-digit
 * characters, and uses negative accumulation to prevent signed
 * integer overflow when processing INT_MIN.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1; /* 1 for positive, -1 for negative */
	int started = 0;
	int result = 0; /* Accumulate as negative to handle INT_MIN */
	int limit = -214748364; /* -INT_MAX / 10 */

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			/* Only process signs before the first digit */
			if (started == 0)
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;

			if (result < limit)
			{
				/* Overflow imminent, return min or max */
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}

			result *= 10;
			if (sign == 1)
			{
				/* Check positive overflow condition (for 7 or more) */
				if (result < -2147483647 + (s[i] - '0'))
					return (2147483647);
				result -= (s[i] - '0'); /* Subtracting a positive number */
			}
			else /* sign == -1 */
			{
				/* Check negative overflow condition (for 8 or more) */
				if (result < -2147483648 + (s[i] - '0'))
					return (-2147483648);
				result -= (s[i] - '0'); /* Subtracting a negative number */
			}
		}
		else if (started == 1)
		{
			/* Stop processing once a number sequence is complete */
			break;
		}
		i++;
	}

	/* If accumulated negatively but sign is positive, negate result */
	if (sign == 1)
		return (-result);

	return (result);
}
