#ifndef lists_h
#define lists_h

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct h_list - (SLL) singly linked lists
 * @str: string
 * @len: length of the string
 * @next: pointer to the next node 
 *
 * Descriptio: SLL node struct
 */

typedef struct h_list
{
	char *string;
	unsigned int length;
	struct h_list *next;
}h_list;

size_t print_list(const list_t *h);

#endif
