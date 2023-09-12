#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creation of a new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Return: created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int e, d, a;
	dog_t *dg;

	if (owner == NULL || name == NULL)
	{
		return (NULL);
	}
	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);
	e = 0;
	while (name[e])
	{
		e++;
	}
	e++;
	dg->name = malloc(e * sizeof(char));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (a = 0; a < e; a++)
		dg->name[a] = name[a];
	dg->age = age;
	for (d = 0; owner[d]; d++)
		;
	d++;
	dg->owner = malloc(d * sizeof(char));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (a = 0; a < d; a++)
		dg->owner[a] = owner[a];
	return (dg);
}
