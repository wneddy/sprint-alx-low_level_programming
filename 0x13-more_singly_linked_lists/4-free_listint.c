#include "lists.h"

/**
 * free_list - function to free list
 * @head: * to head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *now;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now);
	}
}
