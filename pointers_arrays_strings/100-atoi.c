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
	int result = 0;

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

			/* Use negative accumulation to safely handle INT_MIN */
			if (sign == 1)
			{
				/* Check for positive overflow before calculating next result */
				if (result > 2147483647 / 10 || (result == 2147483647 / 10 && (s[i] - '0') > 7))
					return (2147483647); /* Return INT_MAX (positive) */
				
				result = result * 10 + (s[i] - '0');
			}
			else /* sign == -1 (negative) */
			{
				/* Check for negative overflow before calculating next result */
				/* (INT_MIN is -2147483648) */
				if (result < -2147483648 / 10 || (result == -2147483648 / 10 && (s[i] - '0') > 8))
					return (-2147483648); /* Return INT_MIN (negative) */

				result = result * 10 - (s[i] - '0'); /* Subtracting to accumulate as negative */
			}
		}
		else if (started == 1)
		{
			/* Stop processing once a number sequence is complete */
			break;
		}
		i++;
	}

	/* Final result application: if accumulated as negative, use sign=1 */
	if (sign == -1 && result > 0)
		return (-result);

	return (result);
}
