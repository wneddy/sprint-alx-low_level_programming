#include "lists.h"

/**
 * print_listint_safe - funnction to print the list
 * @head: pointer to head of the list
 *
 * Return: no. of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now, *next = head;
	size_t nd = 0;

	if (head == NULL)
		exit(98);
	while (next)
	{
		now = next;
		printf("[%p] %d\n", (void *)now, now->n);

		nd++;
		next = next->next;

		if (now < next)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
	}
	return (nd);
}
