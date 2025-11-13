#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: Prints a formatted 10x10 grid of multiplication
 * results (0-9). Single-digit numbers are padded with an extra
 * space to align columns.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++) /* Outer loop for rows (0-9) */
	{
		for (j = 0; j <= 9; j++) /* Inner loop for columns (0-9) */
		{
			k = i * j; /* The product */

			if (j == 0)
			{
				/* First column, just print the number (which is 0) */
				_putchar(k + '0');
			}
			else if (k < 10)
			{
				/* Single digit product */
				_putchar(',');
				_putchar(' ');
				_putchar(' '); /* Extra padding for alignment */
				_putchar(k + '0');
			}
			else
			{
				/* Double digit product */
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0'); /* Tens digit */
				_putchar((k % 10) + '0'); /* Ones digit */
			}
		}
		_putchar('\n'); /* Newline at the end of each row */
	}
}
