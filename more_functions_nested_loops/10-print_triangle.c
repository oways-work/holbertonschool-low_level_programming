#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Loop for each row */
		for (row = 1; row <= size; row++)
		{
			/* Loop to print spaces */
			for (spaces = 0; spaces < size - row; spaces++)
			{
				_putchar(' ');
			}

			/* Loop to print hashes */
			for (hashes = 0; hashes < row; hashes++)
			{
				_putchar('#');
			}

			/* Print newline after the row */
			_putchar('\n');
		}
	}
}
