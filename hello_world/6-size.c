#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  /* The format specifier is changed to %lu */
  /* The result of sizeof() is cast to (unsigned long) */

  printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
  printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
  
  /* It's common for these exercises to also require long long int for 64-bit systems */
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long long int));
  
  printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
  
  return (0);
}
