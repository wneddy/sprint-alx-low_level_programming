#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - release of the second grid
 * @grid: array to manipulate
 * @height: array height
 *
 * Return: 0
 */
void _free_grid(char **grid, unsigned int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - string manipulation to words
 * by splitting them
 * @str: string to be split
 *
 * Return: splitted array
 */
char **strtow(char *str)
{
	char **stg;
	unsigned int e, hgt, d, a, x7;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (e = hgt = 0; str[e] != '\0'; e++)
		if (str[e] != ' ' && (str[e + 1] == ' ' || str[e + 1] == '\0'))
			hgt++;
	stg = malloc((hgt + 1) * sizeof(char *));
	if (stg == NULL || hgt == 0)
	{
		free(stg);
		return (NULL);
	}
	for (d = x7 = 0; d < hgt; d++)
	{
		for (e = x7; str[e] != '\0'; e++)
		{
			if (str[e] == ' ')
				x7++;
			if (str[e] != ' ' && (str[e + 1] == ' ' || str[e + 1] == '\0'))
			{
				stg[d] = malloc((e - x7 + 2) * sizeof(char));
				if (stg[d] == NULL)
				{
					_free_grid(stg, d);
					return (NULL);
				}
				break;
			}
		}
		for (a = 0; x7 <= e; x7++, a++)
			stg[d][a] = str[x7];
		stg[d][a] = '\0';
	}
	stg[d] = NULL;
	return (stg);
}
