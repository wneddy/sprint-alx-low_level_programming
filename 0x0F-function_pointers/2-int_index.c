#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: given array
 * @size: array size
 * @cmp: fpointer
 *
 * Return: pointer match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		p = 0;
		while (p < size)
		{
			if (cmp(array[p]) != 0)
				return (p);
			p++;
		}
	}
	return (-1);
}
