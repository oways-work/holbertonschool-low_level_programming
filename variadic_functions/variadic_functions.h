#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print - A struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * a data type corresponding to symbol.
 */
typedef struct print
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

