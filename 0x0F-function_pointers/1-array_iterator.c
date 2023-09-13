#include "function_pointers.h"

/**
 * array_iterator - function to exe a function
 * given as para on each element
 * @array: given array
 * @size: array size
 * @action: function callback
 *
 * Return: nill
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		s = 0;
		while (s < size)
		{
			action(array[s];
			s++;
		}
	}
}
