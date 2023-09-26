#include "lists.h"

/**
 * free_listint2 - function to free
 * as it sets head to null
 * @head: * to head of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *now;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		now = *head;
		*head = (*head)->next;
		free(now);
	}
}
