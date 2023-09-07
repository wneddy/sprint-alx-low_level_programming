#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocating a memory space
 * for an array
 * @nmemb: allocated array using calloc
 * @size: specified size
 *
 * Return: created array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ary;
	unsigned int x;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ary = malloc(nmemb * size);
	if (ary == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < nmemb * size)
	{
		ary[x] = 0;
		x++;
	}
	return (ary);
}
