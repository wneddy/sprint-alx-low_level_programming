#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node to
 * given position
 * @head: * to head address
 * @idx: index to position which new node is to be inserted
 * @n: data to be stored
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *now;
	unsigned int x;

	if (head == NULL)
		return (NULL);
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	now = *head;
	for (x = 0; x < idx - 1; x++)
	{
		if (now == NULL)
		{
			free(n_node);
			return (NULL);
		}
		now = now->next;
	}
	if (now == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = now->next;
	now->next = n_node;

	return (n_node);
}
