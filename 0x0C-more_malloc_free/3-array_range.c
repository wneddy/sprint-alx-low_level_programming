#include <stdlib.h>
#include "main.h"

/**
 * array_range - creating array of integers
 * from min to max
 * @min: least value
 * @max: highest value
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ary, sz, x7;

	if (max < min)
		return (NULL);
	sz = max - min + 1;
	ary = malloc(sizeof(int) * sz);

	if (ary == NULL)
	{
		return (NULL);
	}
	x7 = 0;
	while (max >= min)
	{
		ary[x7] = min;
		x7++;
		min++;
	}

	return (ary);
}
