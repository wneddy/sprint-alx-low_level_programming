#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concantinating the two strings
 * to set in a allocated memory space
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the memory
 */

char *str_concat(char *s1, char *s2)
{
	char *cnt;

	int e, d, a, lmt;

	d = 0;
	e = 0;
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s2[d] != '\0')
		d++;
	while (s1[e] != '\0')
		e++;
	cnt = malloc(sizeof(char) * (e + d + 1));
	if (cnt == NULL)
	{
		free(cnt);
		return (NULL);
	}
	for (a = 0; a < e; a++)
	{
		cnt[a] = s1[a];
	}
	lmt = d;
	for (d = 0; d <= lmt; a++, d++)
		cnt[a] = s2[d];
	return (cnt);
}
