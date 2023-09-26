#include "lists.h"

/**
 * sum_listint - function to return sum of all of data
 * of lists
 * @head: * to the head address
 *
 * Return: sum of all data vals
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
