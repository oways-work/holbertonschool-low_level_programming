#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* For size_t */

/* Prototype for _putchar */
int _putchar(char c);

/* Prototype for Task 0 */
void print_name(char *name, void (*f)(char *));

/* Prototype for Task 1 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
