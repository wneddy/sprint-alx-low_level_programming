#include "lists.h"

/**
 * add_nodeint - function t add node at the begginning of the
 * list
 * @head: pointer to the address of the head node
 * @n: data for new node
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;

	*head = n_node;
	return (n_node);
}
