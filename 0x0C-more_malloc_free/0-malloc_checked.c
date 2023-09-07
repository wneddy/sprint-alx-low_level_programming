#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to allocate
 * memory using malloc
 *
 * @b: allocation size
 *
 * Return: address of space
 */

void *malloc_checked(unsigned int b)
{
	char *ary;

	ary = malloc(b);
	if (ary == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (ary);
}
