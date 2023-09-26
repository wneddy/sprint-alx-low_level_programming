#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node of a list
 * @head: * to head of the list
 * @index: index node to retrieve
 *
 * Return: index of nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ret = 0;

	while (head != NULL)
	{
		if (ret == index)
			return (head);
		head = head->next;
		ret++;
	}
	return (NULL);
}
