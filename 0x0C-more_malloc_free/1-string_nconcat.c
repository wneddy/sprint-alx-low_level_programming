#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function to concatinate
 * two strings
 * @s1: 1st string
 * @s2: 2nd string to attach
 * @n: max checker for s2
 *
 * Return: concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int e = n, d; /* e is n d is the index */

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	d = 0;
	while (s1[d])
	{
		d++;
	}
	e++;
	res = malloc(sizeof(char) * (e + 1));
	if (res == NULL)
		return (NULL);
	e = 0;
	for (d = 0; s1[d]; d++)
	{
		res[e++] = s1[d];
	}
	d = 0;
	while (s2[d] && d < n)
	{
		res[e++] = s2[d];
		d++;
	}
	res[e] = '\0';
	return (res);
}
