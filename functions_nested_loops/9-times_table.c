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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
