#include "main.h"
#include <stdlib.h>

/**
 * argstostr - arguments concatination function
 * @ac: loop counter for arg
 * @av: argument vector(array)
 *
 * Return: final output
 */
char *argstostr(int ac, char **av)
{
	char *ary;
	int e, d, a, x7;

	if (av == NULL || ac == 0)
		return (NULL);

	for (e = d = 0; d < ac; d++)
	{
		if (av[d] == NULL)
			return (NULL);

		for (a = 0; av[d][a] != '\0'; a++)
			e++;
		e++;
	}
	ary = malloc((e + 1) * sizeof(char));
	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}
	for (d = a = x7 = 0; x7 < e; a++, x7++)
	{
		if (av[d][a] == '\0')
		{
			ary[x7] = '\n';
			d++;
			x7++;
			a = 0;
		}
		if (x7 < e - 1)
			ary[x7] = av[d][a];
	}
	ary[x7] = '\0';

	return (ary);
}
