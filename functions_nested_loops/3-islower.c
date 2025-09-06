#include "main.h"

/**
 * main - checking for lowercase alphabet
 * a cheaker
 *
 * Return: void.
 */
int _islower(int c)
{

  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else
    {  
      return (0);
    }
}
