#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);

#endif /* MAIN_H */

