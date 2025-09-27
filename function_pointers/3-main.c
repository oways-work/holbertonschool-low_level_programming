#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h> /* For atoi and exit */

/**
 * main - Entry point for the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0 on success. Exits with status code on error.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *op;
    int (*func_ptr)(int, int);

    /* 1. Check for the correct number of arguments */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    op = argv[2];
    num2 = atoi(argv[3]);

    /* 2. Get the correct operator function */
    func_ptr = get_op_func(op);
    if (func_ptr == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* 3. Check for division/modulo by zero */
    if ((*op == '/' || *op == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = func_ptr(num1, num2);
    printf("%d\n", result);

    return (0);
}
