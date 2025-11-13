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
	int limit = -214748364;
	int d; /* Moved declaration to the start of the function */

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
			d = s[i] - '0'; /* Now just assignment */

			/* Pre-multiplication overflow check */
			if (result < limit)
				return (sign == 1 ? 2147483647 : -2147483648);

			result *= 10;

			/* Post-multiplication overflow check */
			if (result < (sign == 1 ? -2147483647 : -2147483648) + d)
				return (sign == 1 ? 2147483647 : -2147483648);

			result -= d;
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
