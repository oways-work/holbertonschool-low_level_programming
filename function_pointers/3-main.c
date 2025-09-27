#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or exit with status code on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(op);

	if (func_ptr == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}
