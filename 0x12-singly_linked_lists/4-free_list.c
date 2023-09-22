#include "lists.h"

/**
 * free_list - frees SLL
 * @head: 1st element
 *
 */

void free_list(list_t *head)
{
	list_t *first = head, *next = head;

	while (next)
	{
		/* store address of the next node in 'next' */
		next = first->next;
		/* free mem alloc for the str in the current node*/
		free(first->str);
		/*free mem alloc for the current node*/
		free(first);
		/*move next node in the list*/
		first = next;
	}
}
