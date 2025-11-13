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
	int i = 0, sign = 1, started = 0, d;
	int result = 0, limit = -214748364;
	int max = 2147483647, min = -2147483648;

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
			if (result < limit)
				return (sign == 1 ? max : min);
			result *= 10;
			if (sign == 1)
			{
				if (result < -max + d)
					return (max);
			}
			else
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
