#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
\tchar *str;
\tunsigned int len;
\tstruct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */
