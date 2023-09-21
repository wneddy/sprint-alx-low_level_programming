#include "main.h"

/**
 * print_lists - function to print all elements
 * @h: address list
 *
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	h_list nds = 0;

	while (h)
	{
		if (!(h->string))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->length, h->string);
		}
		h = h->next;
		nds++;
	}
	return (nds);
}
