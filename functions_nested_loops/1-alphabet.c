#include "main.h"
/**
 * main - check the code
  print_alphabet - Prints the lowercase alphabet, followed by a new line.
 *
 * This function iterates through all lowercase letters from 'a' to 'z'
 * and prints each one using the _putchar function. It then prints a
 * newline character at the end.
 *
 * Return: Always 0.
 */
void print_alpabet(void)

  char letter;

for (letter = 'a'; letter <= 'z'; letter++)
  {
    _putchar(letter);
      }

putchar('\n');

return (0)
}
