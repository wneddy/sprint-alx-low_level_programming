#include "lists.h"

/**
 * pop_listint - function to delete head node
 * while it return its data
 * @head: * to head of list
 *
 * Return: data to deleted data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	d = temp->n;
	*head = temp->next;
	free(temp);
	return (d);
}
