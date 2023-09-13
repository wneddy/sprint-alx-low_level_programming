#include "function_pointers.h"


/**
 * array_iterator - function to exe a function given
 * as para on each element of an array
 * @array: given array
 * @size: array size
 * @action: the callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int s;

	if (action && array)
	{
		s = 0;
		while (count < size)
		{
			action(array[s]);
			s++;
		}
	}
}
