#include <stdio.h>
#include "main.h"
/**
 * main -  Checks for an uppercase character.
 * upprercase only
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
