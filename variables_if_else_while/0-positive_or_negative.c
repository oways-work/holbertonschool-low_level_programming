#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the entry point of program.
 *
 * Description: this is a decription for the program that i am forced to do
 * detetmine positive,negetave or zero.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
  int n;
  
  srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	
	if (n > 0)
	  {
	    printf("positive\n");
	      }
	else if (n == 0)
	  {
	  printf("zero\n");
	  }
	else
	       {
		 printf("negetive\n");
	       }
	return (0);
}
