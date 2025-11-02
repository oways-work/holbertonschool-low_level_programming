#include <stdio.h>

/**
 * main - Fizz-Buzz test program
 *
 * Description: Prints numbers from 1 to 100.
 * For multiples of 3, prints "Fizz".
 * For multiples of 5, prints "Buzz".
 * For multiples of both 3 and 5, prints "FizzBuzz".
 * Each number/word is separated by a space, and the
 * output is followed by a single newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/* Check for multiples of both 3 and 5 first */
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		/* Check for multiples of 3 */
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		/* Check for multiples of 5 */
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		/* Otherwise, print the number */
		else
		{
			printf("%d", i);
		}

		/* Print a space after each item, except the last one */
		if (i < 100)
		{
			printf(" ");
		}
	}

	/* Print the final newline */
	printf("\n");

	return (0);
}
