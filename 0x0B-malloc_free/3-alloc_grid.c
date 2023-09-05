#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - address of 2 dimensional arrays
 * integers
 * @width: array width
 * @height: array height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **gdt;
	int t, h;

	if (width < 1 || height < 1)
		return (NULL);
	gdt = malloc(sizeof(int *) height);
	if (gdt == NULL)
		free(gdt);
		return (NULL);
	t = 0;
	while (t < height)
	{
		gdt[t] = malloc(sizeof(int) * width);
		if (gdt[t] == NULL)
		{
			for (t--; t >= 0; t--)
				free(gdt[t]);
			free(gdt);
			return (NULL);
		}
		t++;
	}
	for (t = 0; t < height; t++)
		for (h = 0; h < width; h++)
			gdt[t][h] = 0;
	return (gdt);
}
