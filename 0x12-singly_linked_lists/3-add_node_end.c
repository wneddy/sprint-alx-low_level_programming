#include "lists.h"

/**
 * add_node_end - Addition of a new node
 * to the end of the list
 * @head: first address
 * @str: inserting node
 *
 * Return: combination
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp_1, *tmp_2;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);

	tmp_1 = malloc(sizeof(list_t));
	if (tmp_1 == NULL)
		return (NULL);

	tmp_1->str = strdup(str);
	if (tmp_1->str == NULL)
	{
		free(tmp_1);
		return (NULL);
	}

	while (str[l])
	{
		l++;
	}
	tmp_1->len = l;
	tmp_1->next = NULL;
	if (*head == NULL)
	{
		*head = tmp_1;
		return (tmp_1);
	}
	tmp_2 = *head;
	while (tmp_2->next)
	{
		tmp_2 = tmp_2->next;
	}
	tmp_2->next = tmp_1;
	return (tmp_1);
}
