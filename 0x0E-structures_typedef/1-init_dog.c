#include "dog.h"

/**
 * init_dog - initializing a variable of the
 * struct dog
 * @d: *structure
 * @name: *dog name
 * @age: dogs age
 * @owner: *owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
