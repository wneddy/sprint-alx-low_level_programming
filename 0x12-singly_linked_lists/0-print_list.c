#include "lists.h"

/**
 * print_list - function to print all elements
 * @h: address list
 *
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nds = 0;

	while (h)
	{
		if (h->string == NULL)
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
