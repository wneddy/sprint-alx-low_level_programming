#include "main.h"
#include "stdlib.h"
/**
 * create_array - creating an array of characters
 * and initializing with a specific range of char's
 * @size: array size
 * @c: character o manipulate the array
 *
 * Return: null if size is 0
 * else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int s;

	s = 0;
	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (s < size)
	{
		a[s] = c;
		s++;
	}

	return (a);
}
