#include "3-calc.h"
#include <stddef.h> /* For NULL */
#include <string.h> /* For strcmp */

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator string passed as an argument.
 *
 * Return: A pointer to the function that corresponds to the operator.
 * If the operator is not found, returns NULL.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    /* Loop until an operator is matched or the end of the array is reached */
    while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
    {
        i++;
    }

    return (ops[i].f); /* Returns the function pointer or NULL if not found */
}
