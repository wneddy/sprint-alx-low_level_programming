#include "lists.h"

/**
 * reverse_listint - function to reverse the order of the list
 * @head: * to point the head of the list
 *
 * Return: 1st node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *now = *head;

	while (now != NULL)
	{
		listint_t *next_node = now->next;
		now->next = pre;
		pre = now;
		now = next_node;
	}
	*head = pre;
	return (*head);
}
