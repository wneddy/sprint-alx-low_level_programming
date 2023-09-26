#include "lists.h"

/**
 * add_nodeint_end - function to new node at the
 * end of the list
 * @head: * to head of the list
 * @n: data for new node
 *
 * Return: new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint *n_node;
	listint *now;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		now = *head;
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = n_node;
	}
	return (n_node);
}
