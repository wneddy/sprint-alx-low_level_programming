#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function to free allocated
 * space of dog
 * @d: pointer to the struct
 *
 * Return: success
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
