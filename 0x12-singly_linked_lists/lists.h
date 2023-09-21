#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * struct h_list - (SLL) singly linked lists
 * @str: string - (mem alloc string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: SLL node struct
 */

typedef struct h_list
{
	char *string;
	unsigned int length;
	struct h_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
