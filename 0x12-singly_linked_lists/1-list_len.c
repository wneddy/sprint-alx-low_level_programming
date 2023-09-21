#include "lists.h"

/**
 * list_len - function to output no.
 * of elements
 * @h: list pointer
 *
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}
