#include "lists.h"

/**
 * add_node - new code to
 * the start of the (SLL)
 * @head: pointer to point to list
 * @str: add string
 *
 * Return: pointer to the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
