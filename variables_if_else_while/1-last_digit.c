#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program for signing a random
 * number and tates whether it is greater than 5, 
 * 0, or less than 6 and not 0.
 *
 * Returne: always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

last_digit= n % 10;

printf("the last digit %d is %d ", n, last_digit);

  if(last_digit > 5)
  {
    printf("and is greater than 5\n");
  }
  else if(last_digit == 0)
   {
     printf("and id 0\n");
   }
  else
   {
     printf("and is less than 6 and not 0");
   }

   return(0);
}
