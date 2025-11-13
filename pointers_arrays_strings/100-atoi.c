#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 * Description: Handles signs, numerical conversion, and implements
 * overflow checks by accumulating the result as a negative number.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	int result = 0;
	int limit = -214748364; /* -INT_MAX / 10 */
	int d;
	int max = 2147483647; /* INT_MAX */
	int min = -2147483648; /* INT_MIN */

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
			d = s[i] - '0';

			/* 1. Pre-multiplication overflow check */
			if (result < limit)
				return (sign == 1 ? max : min);

			result *= 10;

			/* 2. Post-multiplication overflow check (using subtraction) */
			if (sign == 1)
			{
				if (result < -max + d)
					return (max);
			}
			else /* sign == -1 */
			{
				if (result < min + d)
					return (min);
			}
			
			result -= d;
		}
		else if (started == 1)
		{
			break;
		}
		i++;
	}

	return (sign == 1 ? -result : result);
}
