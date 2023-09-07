#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocating memory function
 * @ptr: previous allocated mem
 * @old_size: size of ptr
 * @new_size: new size
 *
 * Return: reallocated mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
		free(ptr);
		return (NULL);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
