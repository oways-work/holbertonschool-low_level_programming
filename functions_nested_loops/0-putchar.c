#include "main.h"

/**
 * main - Prints the string "_putchar" followed by a new line.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int main(void)
{
  char *s = "_putchar";
  
  while (*s)
    {
      _putchar(*s);
      s++;
    }
  _putchar('\n');

  return (0);
}
