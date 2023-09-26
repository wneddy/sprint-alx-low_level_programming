#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node of
 * a specified index
 * @head: pointer pointing to the head of the list
 * @index: specified index
 *
 * Return: 1 if success else -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	listint *now, *temp;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	now = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (now->next == NULL)
			return (-1);
		now = now->next;
	}
	temp = now->next;
	if (temp == NULL)
		return (-1);
	now->next = temp->next;
	free(temp);
	return (1);
}
