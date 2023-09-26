#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print all
 * elements of a lists
 * @h: header address
 *
 * Return: no. of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t data_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		data_count++; /* increament */
	}
	return (data_count);
}
