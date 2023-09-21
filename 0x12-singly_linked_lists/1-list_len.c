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
	const list_t *temp_alloc;
	unsigned int count = 0;
	temp_alloc = h;

	while (temp_alloc)
	{
		count++;
		temp_alloc = temp_alloc->next;
	}
	return (count);
}
