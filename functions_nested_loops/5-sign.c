#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Description: This function checks the sign of a number 'n'.
 * It prints a character ('+', '0', or '-') based on the sign and returns
 * a corresponding integer value.
 *
 * Return: 1 and prints '+' if n is greater than zero,
 * 0 and prints '0' if n is zero,
 * -1 and prints '-' if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
