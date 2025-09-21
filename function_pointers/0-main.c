#include "function_pointers.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	_puts("Hello, my name is ");
	_puts(name);
	_putchar('\n');
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
	int i = 0;

	_puts("Hello, my uppercase name is ");

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			_putchar(name[i] - 32); /* Convert to uppercase */
		else
			_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	return (0);
}
