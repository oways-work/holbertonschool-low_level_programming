#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function prints a formatted 9x9 multiplication table.
 * Each row is on a new line, and numbers are separated by a comma
 * and a space. Single-digit numbers are padded with an extra space.
 * Return: void
 */
void times_table(void)
{
    int row, col, product;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;

            if (col == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)
                {
                    _putchar(' ');
                    _putchar(product + '0');
                }
                else
                {
                    _putchar((product / 10) + '0');
                    _putchar((product % 10) + '0');
                }
            }
        }
        _putchar('\n');
    }
}