#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (;n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
        {
                for (;n >= 98; n--)
                {
                        printf("%d", n);
                        if (n != 98)
                        {
                                printf(", ");
                        }
                }
		}
	printf("\n");
}
