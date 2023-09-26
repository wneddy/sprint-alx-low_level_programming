#include "lists.h"

/**
 * listint_len - function to count no. of
 * elements in a linked lists
 * @h: header address
 *
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t data_count = 0;

	while (h != NULL)
	{
		data_count++;
		h = h->next;
	}
	return (data_count);
}
