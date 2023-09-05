#include "main.h"
#include "stdlib.h"

/**
 * _strdup - creating a function
 * to store a string from another copy
 * @str: string to be copied
 *
 * Return: pointer to the array
 */

char *_strdup(char *str)
{
	char *x;
	int sz, c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (sz = 0; str[sz] != '\0'; sz++)

		;
	x = malloc((sizeof(char) * sz) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < sz; c++)
	{
		x[c] = str[c];
	}
	x[c] = '\0';
	return (x);
}


